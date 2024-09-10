list = []

sum = 0

n = int(input("Enter -ize:"))
for i in range(n):
    list.append(int(input()))

for i in list:
    if i % 2 == 0: 
        sum += i

print(sum)
