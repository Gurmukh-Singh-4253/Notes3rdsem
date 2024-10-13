string = "Python Programming"

for i in string:
    if i.lower() in "pho":
        break
    print(i, end='')
