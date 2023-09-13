a=1
b=2
c=3
g=4
d=(a+b+c)/2
for n in range(100):
    if d<1200:
        d=(a+b+c)/2
        a=b
        b=c    
        c=d
        g+=1
print(g)
