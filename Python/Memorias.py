ram = []
a = 1
cont = 3

#Completa la informacion de RAM y cache
for i in range(0, 16):
    ram.append([])
    for e in range (0, 16):
        ram[i].append(a)
        a = a+1

cache = [ram[0], ram[1], ram[2], ram[3]]

#Definicion del metodo de busqueda
def buscar(numero):
    global cont
    bandera = False
    for i in range(4):
        for e in range(16):
            if numero == cache[i][e]:
                print ("El numero", numero, "se encontro en el Byte No.", e+1, "del Bloque No.", i+1, "de la memoria caché")
                bandera = True

    if(bandera == False):
        for i in range(16):
            for e in range(16):
                if numero == ram[i][e]:
                    print ("El numero", numero, "se encontro en el Byte No.", e+1, "del Bloque No.", i+1, "de la memoria RAM")
                    bandera = True
                    if cont<3:
                        cont = cont+1
                        cache[cont] = ram[i]
                        
                    else:
                        cont=0
                        cache[cont] = ram[i]

#Definicion menu de interaccion
def menu():
    num = int(input("Escriba el numero que desea buscar\n"))
    buscar(num)
    menu()

#Inicio
menu()