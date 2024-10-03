ll = int(input("Enter lower limit"))
ul = int(input("Enter upper limit"))

odd = [i for i in range(ll,ul) if i%2==1]
even = [i for i in range(ll,ul) if i%2==0]

print(f"Sum of even numbers in the range = {sum(even)}\nSum of odd numbers in the range = {sum(odd)}")
