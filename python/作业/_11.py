import random

count = 1
i="y"
while(i=="y"):
    y=random.randint(1,10)
    x=eval(input("输入一个猜的数"))
    while x!=y:
        print("错误")
        if x<y:
            print("小了")
        if x>y:
            print("大了")
        x=eval(input("再输入猜的数"))
        count+=1
    if x==y:
        print("正确\n")
        print("猜了{}次".format(count))
    i=input("\n是否继续y/n \n ")
    count = 1
    
