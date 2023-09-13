import random                             
li = []                                 
for i in range(1001):                       
    li.append(random.randrange(20, 101)) 
li.sort()
n = set(li)
for i in n:
    print(i, end=" ")
for i in range(20, 101):
    c = li.count(i)
    print("%d出现了%d次" % (i, c))
