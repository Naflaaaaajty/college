A=eval(input("请输入第一个数:"))
B=eval(input("请输入第二个数:"))
if(A<B):
    tmp=A
    A=B
    B=tmp
i=1
x=A*B
while(i):
    i = A % B
    A = B
    B = i
print("最大公约数")
print(A)
print("最小公倍数")
print(int(x/A))

