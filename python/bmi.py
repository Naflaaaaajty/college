a=eval(input("请输入身高："))
n=eval(input("请输入体重："))
c=n/a**2
print("国内bmi指数：\n");
if c<18.5:
    print("偏瘦\n")
elif 18.5<=c<24:
    print("正常\n")
elif 24<=c<28:
    print("偏重\n")
elif c>=28:
    print("肥胖\n")
print("国际bmi指数：\n")
if c<18.5:
    print("偏瘦\n")
elif 18.5<=c<25:
    print("正常\n")
elif 25<=c<30:
    print("偏重\n")
elif c>=30:
    print("肥胖\n")
