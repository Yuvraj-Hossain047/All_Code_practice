import math

a = float(input("Enter first side: "))
b = float(input("Enter second side: "))
c = float(input("Enter third side: "))

if c >= (a + b) or a >= (b + c) or b >= (c + a):
    print("Wrong input! These sides do not form a triangle.")
else:
    s = (a + b + c) / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    print(f"The area of the triangle is {area:.2f}")
