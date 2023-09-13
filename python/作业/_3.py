g=int(input("请输入购物款"))
if g>=5000:
    m=0.8
elif g>=3000:
    m=0.85
elif g>=2000:
    m=0.9
elif g>=1000:
    m=0.95
else:
    m=l
z=m*g
print(z)
