string = 'python prog language'

index = 0

while index < len(string):
    if string[index] not in 'pam':
        print(string[index], end="")
