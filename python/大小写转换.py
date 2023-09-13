s = input()
b = []
for i in s:
    if i.islower():
        b.append(i.upper())
    elif i.isupper():
        b.append(i.lower())
    else:
        b.append(i)
print("".join(b))
