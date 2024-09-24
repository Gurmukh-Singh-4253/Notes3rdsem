import math

p = int(input("Enter the principle:")) 
r = int(input("Enter the rate of interest:")) 
t = int(input("Enter the time:")) 


A = p*(1 + r/100)**t

CI = A-p

print("The Compound interest for this case is : ", CI)
