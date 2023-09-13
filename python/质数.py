ls = [];
for i in range(100):
    if i < 2:
        continue;
    for j in range(2, i):      
        if i%j == 0: 
            break;
    else:
        ls.append(i);
print(ls);
s = 0;
for k in ls:
    s += k;
print(s);
