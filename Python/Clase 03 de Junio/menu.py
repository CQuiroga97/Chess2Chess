##Menu
#Lo que este dentro del parentesis del metodo es un argumento
def sumar(x, y):
    return x + y
def restar(x, y):
    return x - y
def multiplicar(x, y):
    return x * y
def dividir(x, y):
    if(y == 0):
        return "error"
    else:
        return x/y
b = 0
##     No (    1   Y       0) = 1
while(b == 0):
    opt = -1
    while not(opt < 6 and opt > 0):
        opt = int(input("Bienvenido\n 1. Suma\n 2. Resta \n 3. Multiplicación \n 4. División\n 5. Salir\n Escriba una opción:"))
        if not(opt < 6 and opt > 0):
            print("Opcion invalida!\n")
        if(opt == 1):
            print(sumar(int(input("Ingrese el valor de x: ")), int(input("Ingrese el valor de y: "))))
        elif(opt == 2):
            print(restar(int(input("Ingrese el valor de x: ")), int(input("Ingrese el valor de y: "))))
        elif(opt == 3):
            print(multiplicar(int(input("Ingrese el valor de x: ")), int(input("Ingrese el valor de y: "))))
        elif(opt == 4):
            y = 0
            while(y == 0):
                div = dividir(int(input("Ingrese el valor de x: ")), int(input("Ingrese el valor de y: ")))
                if(str(div) == "error"):
                    print("No se puede dividir por 0")
                else:
                    print(div)
                    y = 1
        elif(opt == 5):
            print("Chao")
            b = 1
