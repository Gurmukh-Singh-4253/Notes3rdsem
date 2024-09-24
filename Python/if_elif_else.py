# to find the max out of 3 numbers: 
# if approach

a = int(input("Enter a number:"))
b = int(input("Enter a number:"))
c = int(input("Enter a number:"))

max = a

if b>max:
    max = b

if c>max:
    max = c

print(max)

# if else approach

a = int(input("Enter a number:"))
b = int(input("Enter a number:"))
c = int(input("Enter a number:"))

if a > b: 
    max = a 
else: 
    max = b
if c>max:
    max = c

print(max)

#if elif else approach

a = int(input("Enter a number:"))
b = int(input("Enter a number:"))
c = int(input("Enter a number:"))

if a>b: 
    if a>c:
        max = a
    else:
        max = c
elif b>c:
    max = b
else:
    max = c

print(max)
