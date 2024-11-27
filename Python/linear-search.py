num = int(input("Enter a number:"))
arr = [num]

while num != '':
    num = input("Enter a number, leave blank to confirm selection:")
    if num == '':
        continue
    arr.append(int(num))

tar = int(input("Enter the number you want to find:"))

try:
    print("The element is present at index:", arr.index(tar))
except ValueError:
    print("The element is not present in the list.")
