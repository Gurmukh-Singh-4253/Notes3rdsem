fruits = ["Mango", "Apple", "Orange"]
colors = ["Yellow", "Red", "Orange"]

merger = dict()

for i in range(len(fruits)):
    merger[fruits[i]] = colors[i]

for i in merger.keys():
    print(f"{i}\t:{merger[i]}")
