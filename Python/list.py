num = int(input("Enter a number:"))
arr = [num]

while num != '':
    num = input("Enter a number, leave blank to confirm selection:")
    if num == '':
        continue
    arr.append(int(num))

print(max(arr))
