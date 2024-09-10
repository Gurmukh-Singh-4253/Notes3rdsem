list = []

n= int(input("Enter Size"))


for i in range(n):
    list.append(int(input()))

max = list[0]

for i in list:
    if max < i:
        max = i

print(max)
