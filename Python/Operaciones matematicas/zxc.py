op = input("¿Que oepración desea cumplir?: ")
if(op == "Sumar" or op == "sumar"):
    print("Restultado: " + str(int(input("Ingrese el numero 1: ")) + int(input("Ingrese el numero 2: "))))
elif(op == "Restar" or op == "restar"):
    print("Restultado: " + str(int(input("Ingrese el numero 1: ")) - int(input("Ingrese el numero 2: "))))
elif(op == "Multiplicar" or op == "multiplicar"):
    print("Restultado: " + str(int(input("Ingrese el numero 1: ")) * int(input("Ingrese el numero 2: "))))
elif(op == "Dividir" or op == "dividir"):
    num1 = int(input("Ingrese el numero 1: "))
    num2 = int(input("Ingrese el numero 2: "))
    if(num2 == 0):
        print("No es posible dividir por 0")
    else:
        print("Resultado: " + str(num1/num2))
else:
    print("No reconozco esa operación...")