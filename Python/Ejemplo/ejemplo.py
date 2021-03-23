opt = int(input("\n\n\nBienvenido\n\n\n\nSeleccione una opcion:\n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir\n"))

numero1 = 5
numero2 = 5
numero1 = int(input("ingrese el primer valor: "))
numero2 = int(input("ingrese el segundo valor: "))
if(opt == 1):
    resultado = numero1 + numero2
elif(opt == 2):
    resultado = numero1 - numero2
elif(opt == 3):
    resultado = numero1 * numero2
elif(opt == 4):
    if(numero2 != 0):
        resultado = numero1 / numero2
    else:
        print("No es posible dividir por 0")
        resultado = "Error"
else:
    print("Opcion no valida!")

print("El resultado es: " + str(resultado))