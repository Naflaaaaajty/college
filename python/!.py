a=eval(input())
count=1
count_1=1
for i in range(1,a):
    for j in range(1,i+1):
        count=count*j
count_1=count*count_1
count=1
print(count_1)
