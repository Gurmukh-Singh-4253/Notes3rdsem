string = "Python Programming"

for i in string:
    if i.lower() in "pho":
        continue
    print(i, end='')

