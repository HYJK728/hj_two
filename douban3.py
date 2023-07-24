import csv
import sqlite3

sqliteConn = sqlite3.connect('doubanDB')
cur1 = sqliteConn.cursor()


# 读取csv文件
with open('douban.csv', 'r', encoding='utf-8') as f:
    read = csv.reader(f)

    next(read)
    for row in read:
        sql = "INSERT INTO Movies (moviename,year,score,comments) VALUES (?,?,?,?)"
        val = (row[0],row[1],row[2],row[3])
        cur1.execute(sql,val)

sqliteConn.commit()
sqliteConn.close()
print('已经添加信息')