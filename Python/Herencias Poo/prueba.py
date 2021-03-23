from estudiante import estudiante
from profesor import profesor
from coordinador import coordinador
estudiantes = []
profesores = []
coordinadores = []
flag = 0
while(flag == 0):
    flag2 = 0
    opt = int(input("-- PLATAFORMA -- \n 1. Estudiantes. \n 2. Profesores. \n 3. Coordinadores \n 4. Salir \n Digitar opcion: "))
    if(opt == 1):
        while(flag2 == 0):
            opt2 = int(input("-- ESTUDIANTES -- \n 1. Registrar nuevo estudiante. \n 2. Mostrar cantidad de estudiantes. \n 3. Buscar estudiante \n 4. Volver \n Digitar opcion: "))
            if(opt2 == 1):
                estudiantes.append(estudiante(input("Ingrese la materia: "), input("Ingrese el curso: "), input("Ingrese la identificación: "), input("Ingrese el nombre: "), input("Ingrese el apellido: ")))
            elif(opt2 == 2):
                print("Hay un total de " + str(len(estudiantes)) + " estudiantes")
            elif(opt2 == 3):
                id = input("Ingrese la identificacion del estudiante")
                encontrado = None
                for cantidad in estudiantes:
                    if(cantidad.id == id):
                        encontrado = cantidad
                if(encontrado != None):
                    print("Información del estudiante\n Id: " + encontrado.id + "\n Nombre: " + encontrado.nombre + "\n Apellido: " + encontrado.apellido + "\n Curso: " + encontrado.curso)
                else:
                    print("No se encontro informacion")
            elif(opt2 == 4):
                flag2 = 1
    if(opt == 2):
        while(flag2 == 0):
            opt2 = int(input("-- PROFESORES -- \n 1. Registrar nuevo profesor. \n 2. Mostrar cantidad de profesores. \n 3. Buscar profesor \n 4. Mostrar firma\n 5. Volver \n Digitar opcion: "))
            if(opt2 == 1):
                profesores.append(profesor(input("Ingrese la identificación: "), input("Ingrese el nombre: "), input("Ingrese el apellido: "),  input("Ingrese la cantidad de horas: "),  input("Ingrese el salario: ")))
                profesores[len(profesores) - 1].setMateria(input("Ingrese la materia que dicta el profesor: "))
            elif(opt2 == 2):
                print("Hay un total de " + str(len(profesores)) + " profesores")
            elif(opt2 == 3):
                id = input("Ingrese la identificacion del profesor: ")
                encontrado = None
                for cantidad in profesores:
                    if(cantidad.id == id):
                        encontrado = cantidad
                if(encontrado != None):
                    print("Información del profesor\n Id: " + encontrado.id + "\n Nombre: " + encontrado.nombre + "\n Apellido: " + encontrado.apellido + "\n Salario: " + encontrado.salario + "\n Materia: " + encontrado.getMateria())
                else:
                    print("No se encontro informacion")
            elif(opt2 == 4):
                id = input("Ingrese la identificacion del profesor: ")
                encontrado = None
                for cantidad in profesores:
                    if(cantidad.id == id):
                        encontrado = cantidad
                if(encontrado != None):
                    encontrado.firma()
                else:
                    print("No se encontro informacion: ")
            elif(opt2 == 5):
                flag2 = 1
    elif(opt == 3):
        while(flag2 == 0):
            opt2 = int(input("-- COORDINADORES -- \n 1. Registrar nuevo coordinador. \n 2. Mostrar cantidad de coordinador. \n 3. Buscar coordinador \n 4. Mostrar firma\n 5. Volver \n Digitar opcion: "))
            if(opt2 == 1):
                coordinadores.append(coordinador(input("Ingrese la seccion: "),input("Ingrese la identificación: "), input("Ingrese el nombre: "), input("Ingrese el apellido: "),  input("Ingrese la cantidad de horas: "),  input("Ingrese el salario: ")))
            elif(opt2 == 2):
                print("Hay un total de " + str(len(coordinadores)) + " coordinadores")
            elif(opt2 == 3):
                id = input("Ingrese la identificacion del coordinador: ")
                encontrado = None
                for cantidad in coordinadores:
                    if(cantidad.id == id):
                        encontrado = cantidad
                if(encontrado != None):
                    print("Información del coordinador\n Id: " + encontrado.id + "\n Nombre: " + encontrado.nombre + "\n Apellido: " + encontrado.apellido + "\n Salario: " + encontrado.salario + "\n Materia: " + encontrado.materia)
                else:
                    print("No se encontro informacion")
            elif(opt2 == 4):
                id = input("Ingrese la identificacion del coordinador")
                encontrado = None
                for cantidad in coordinadores:
                    if(cantidad.id == id):
                        encontrado = cantidad
                if(encontrado != None):
                    encontrado.firma()
                else:
                    print("No se encontro informacion")
            elif(opt2 == 5):
                flag2 = 1
    elif(opt == 4):
        flag = 1


