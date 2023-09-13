n = int(input("请输入整数n: "))
s = 1
for i in range(1,n+1):
    s *= i
print("{}! = {}".format(n,s))
