a = int(input())
b = int(input())
c = int(input())
if ((a + b) % 2 == 0 or (b + c) % 2 == 0 or (a + c) % 2 == 0):
    print("Имеется пара, которая в сумме дает парное число.")
else:
    print("Такой пары не существует")
