x = int(input("Enter the first number"))
y = int(input("Enter the second number"))
z = int(input("Enter the third number"))

if x > y:
    if x > z:
        print(x)
    else:
        print(z)
elif y > z:
    print(y)
else:
    print(z)
