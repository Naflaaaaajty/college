s=input('请输入一个字符串：')
i=0
a=[0]*len(s)
for x in s:
    print("{}".format(x))
    a[i]=ord(x)
    i=i+1
    print("ASCII码为：",ord(x))
    
