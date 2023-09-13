def fun(str):
    i=0
    j=len(str)-1
    while i<=j:
        if str[i]==str[j]:
            j-=1
            i+=1
        else:
            break
    if(i>j):
        print(str,"是回文")
    else:
        print(str,"不是回文")
