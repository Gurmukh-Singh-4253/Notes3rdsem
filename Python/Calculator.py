string = input("Enter the expression to evaluate:")

precedence = ["**", "/", "*", "+","-"] 

for i in precedence:
    if i in string:
        # access the numbers on either side of the operation:
        # replace the numbers and the operation by their answer
    
