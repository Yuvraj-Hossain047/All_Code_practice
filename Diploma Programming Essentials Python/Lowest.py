a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
c = float(input("Enter third number: "))

if (a < b) and (a < c):
    print("The lowest number is", a)
elif (b < a) and (b < c):
    print("The lowest number is", b)
else:
    print("The lowest number is", c)
