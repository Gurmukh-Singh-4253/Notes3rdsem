def mul(m, n):
    result = 1
    for i in range(n):
        result *= m
        m -= 1
    return result


num = 10000
x = 0
prob = 1

while prob > 0.5:
    x += 1
    prob = (mul(num,x)) / num ** x

print(x)
