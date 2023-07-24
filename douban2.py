import sqlite3

#建立一个MySQL连接
sqliteConn = sqlite3.connect('doubanDB')
cur1 = sqliteConn.cursor()

#创建商品表
sql = '''
create table Movies(
        moviename not null,
        year int,
        score REAL,
        comments text);
'''
cur1.execute(sql)
sqliteConn.commit()

print('成功创建表')