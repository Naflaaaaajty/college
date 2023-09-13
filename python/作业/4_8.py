def fun(n):
    s=0
    for i in range(1,n):
        if(n%i==0):
            s=s+i
    if(s==n):
        print(n,"是完数")
    else:
        print(n,"不是完数")
