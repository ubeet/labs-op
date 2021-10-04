import math
h = int(input("Введите высоту: "))
r = int(input("Введите радиус: "))
print("Объем цилиндра: ", round(math.pi * math.pow(r, 2) * h, 3))
print("Объем конуса: ", round(1/3 * math.pi * math.pow(r, 2) * h, 3))