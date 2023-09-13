n=eval(input("输入一个整数"))
if n%5==0 and n%7==0:
    print("{}能同时被5和7整除".format(n))
else:
    print("{}不能同时被5和7整除".format(n))
