import random

choices = (10, 50, 100)

choice = random.choice(choices)

if choices == 10:
    print("The choice was 10")
elif choices == 50:
    print("The choice was 50")
else:
    print("The choice was 100")
