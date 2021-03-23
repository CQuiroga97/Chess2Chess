##operadores logicos - And Or Not

a = 1
b = 2
a = int(input("Digite el primer numero\n"))
while(b==0):
    b = int(input("Digite el segundo numero\n"))
    if b==0:
        print("El numero debe ser distinto a 0\n")
res = a/b
print("El resultado es " + str(res))