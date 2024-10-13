import random
from matplotlib import pyplot as plt

array = []
for i in range(10000000):
    array.append(random.random())

plt.hist(array, bins=100)
plt.show()
