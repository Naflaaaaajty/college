def fun(a,l,r):
    m=(l+r)//2
    if m>a:
        return fun(a,l,m)
    elif m<a:
        return fun(a,m+1,r)
    else:
        return m
        
    




global an
l=[]
s=int(input("请输入你要输入的数据个数"))
while(s):
    a=int(input("请输入你要输入的数据"))
    l.append(a)
    s-=1
answer=int(input("请输入你要查找的数据"))
print(fun(answer,0,s-1))

    
