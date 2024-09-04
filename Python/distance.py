def abs(int x):
    if x<0:
        return -x 
    return x 

x1 = int(input("Enter x1"))
x2 = int(input("Enter x2"))
y1 = int(input("Enter y1"))
y2 = int(input("Enter y2"))

print("Eucildean Distance is:",((x1-x2)**2+ (y1-y2)**2)**0.5)
print("Manhattan Distance is:",abs(x1-x2)+abs(x1-x2))
