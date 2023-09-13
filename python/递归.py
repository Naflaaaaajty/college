def fun(x,y):
    if y==0:
        return 1
    else:
        
        return fun(x,y-1)
  
x=eval(input("请输入x："))
y=eval(input("请输入y："))
global count
count=1
fun(x,y,count)
print(count)

