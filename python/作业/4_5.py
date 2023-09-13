def fun(m,n):
    if(m<n):
        t=0
        t=m
        m=n
        n=t
    a=m%n
    b=m*n
    while a!=0:
        m=n
        n=a
        a=m%n
    print("最小公倍数为",b/n)
