import selenium.webdriver as driver
import re,time,csv,pymysql

bs = driver.Edge()
bs.get("https://movie.douban.com/top250")
html = bs.page_source
obj=re.compile(r'<em class="">(?P<no>\d+)</em>.*?'
         r'<div class="hd">.*?<span class="title">(?P<name>\w+)</span>'
         r'.*?<p class="">.*?<br>.*?(?P<year>\d{4})'
         r'.*?<span class="rating_num" property="v:average">(?P<score>.*?)</span>'
         r'.*?(?P<num>\d+)人评价'
         ,re.S)

result = obj.finditer(html)
datas = [['电影名','上映年份','评分','评论人数']]
for movie in result:
    print(movie.group('name'),movie.group('year'),movie.group('score'),movie.group('num'))
    row = [movie.group('name'),movie.group('year'),movie.group('score'),movie.group('num')]
    datas.append(row)

with open('douban.csv',mode= 'w',newline='',encoding='utf-8') as f:
    csvw = csv.writer(f)
    csvw.writerows(datas)

print("数据爬取成功~~~")