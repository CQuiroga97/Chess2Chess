import ast
def regActividad():
    dic = {}
    cargar = lambda a, b, c, d: dic.update({"id":a,"fecha":b, "hora":c, "nombre":d})
    texto = lambda tx: file.write(str(tx)+"\n")
    dia = 0
    mes = 0
    ano = 0
    hora = -1
    minutos = -1
    while(dia < 1 or dia > 31):
        dia = int(input("Ingrese el dia de la actividad (Entre 1 - 31): "))
    while(mes < 1 or mes > 12):
        mes = int(input("Ingrese el mes de la actividad: (Entre 1 - 12)"))
    while(ano < 1900 or ano > 3000):
        ano = int(input("Ingrese el aÃ±o de la actividad: (Entre 1900 - 3000)"))
        fecha = str(dia)+'/'+str(mes)+'/'+str(ano)
    while(hora < 0 or hora > 23):
        hora = int(input("Ingrese la hora de la actividad (Entre 0 - 23): "))
    while(minutos < 0 or minutos > 59):
        minutos = int(input("Ingrese los minutos de la actividad (Entre 0 - 59): "))
    horaC = str(hora)+":"+str(minutos)
    nombre = input("Ingrese el titulo de la actividad: ")
    id = str(dia)+str(mes)+str(ano)+"-"+str(hora)+str(minutos)
    cargar(id, fecha, horaC, nombre)
    file = open("base.txt", "a")
    texto(dic)
    file.close()
def buscar():
    cont = lambda c: ast.literal_eval(c)
    dia = 0
    mes = 0
    ano = 0
    while(dia < 1 or dia > 31):
        dia = int(input("Ingrese el dia de la actividad (Entre 1 - 31): "))
    while(mes < 1 or mes > 12):
        mes = int(input("Ingrese el mes de la actividad: (Entre 1 - 12)"))
    while(ano < 1900 or ano > 3000):
        ano = int(input("Ingrese el aÃ±o de la actividad: (Entre 1900 - 3000)"))
    id = str(dia)+str(mes)+str(ano)
    file = open("base.txt", "r")
    lineas = file.readlines()
    for contenido in lineas:
        dic = cont(contenido)
        if dic['id'].split("-")[0] == id:
            print ("El "+dic['fecha']+" a las "+dic['hora']+ ": " + dic['nombre'])
def mostrarAgenda():
    cont = lambda c: ast.literal_eval(c)
    file = open("base.txt", "r")
    lineas = file.readlines()
    for contenido in lineas:
        dic = cont(contenido)
    print ("El "+dic['fecha']+" a las "+dic['hora']+ ": " + dic['nombre'])
opt = '0'
while(opt != '4'):
    opt = input("Bienvenido!\n Seleccione una opcion:\n 1. Registrar actividad. \n 2. Mostrar toda la agenda. \n 3. Buscar una fecha\n 4. Salir\n Digite una opción: ")
    if opt == '1': 
        regActividad()
    elif opt == '2': 
        mostrarAgenda()
    elif opt == '3': 
        buscar()
    elif opt == '4':
        print("Chao!")
    else:
        print("Opcion no valida!")