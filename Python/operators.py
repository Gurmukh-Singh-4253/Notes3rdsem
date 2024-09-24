# Arithemetic operators :

a = int(input("Enter a number:"))
b = int(input("Enter a number:"))

sum = a+b 

print(f"The sum is {sum}")

# Relational operators :

a = int(input("Enter a number:"))
b = int(input("Enter a number:"))

print(f"Is a greater than b:{a>b}")
print(f"Is a equal to b:{a==b}")

# Assignment operators :
# If you come up with a way to demonstrate this, lemme know too

# Logical operators :
a = int(input("Enter a number:"))
b = int(input("Enter a number:"))
c = int(input("Enter a number:"))

print(f"Is a>b and a>c: {a>b and a>c}")
print(f"Is a>b or a>c: {a>b or a>c}")

# Bitwise  operators :
a = int(input("Enter a number:"))
b = int(input("Enter a number:"))

print("a and b under bitwise and: {a & b}")
print("a and b under bitwise or: {a | b}")
print("a and b under bitwise xor: {a ^ b}")

# Ternary operators :
a = int(input("Enter a number:"))
b = int(input("Enter a number:"))

min = "a is minimum" if a<b
    else "b is minimum"

print(min)

# Membership operators :
squares_till_100 = [
    1,
    4,
    9,
    16,
    25,
    36,
    49,
    64,
    81,
    100
]

a = int(input("Enter a number:"))

if a in squares_till_100:
    print("the number is a square under 100")
else:
    print("the number is not a square under 100")

# Identity operators :
a = int(input("Enter a number:"))
b = a

print(a is b)

a = 10
b = 10

print(a is b)

