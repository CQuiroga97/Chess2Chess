cantCorch = 0
    variables = []
    librerias = []
    tipoVariable = ["int ", "string ", "ofstream ", "ifstream ", "char ", "float "]
    estructuras = ["while", "switch", "if ", "if("]
    condiciones = ["==", "<", ">", "!=", "<=", ">=", "!"]
    errores = 0
    file = open(ruta, "r")
    lineas = file.readlines()
    numLineas = 0
    for contenido in lineas:
        numLineas += 1
        linea = contenido.strip()
        if linea:
            if (linea.find(";") == -1 and linea.find(">") == -1 and linea.find("{") == -1 and linea.find("}") == -1 and linea.find(":") == -1 and linea.find(")") == -1):
                print("Error en la linea " + str(numLineas) + ", fin de linea desconocido")
                errores += 1
            if linea.find("{") != -1:
                cantCorch += 1
            if linea.find("}") != -1:
                cantCorch -= 1
            if linea.find("main") == -1:
                if linea.find("cout") != -1:
                    if linea.find("<<") == -1 and linea.find("using") == -1:
                        print("Error en la linea " + str(numLineas) + ": No se encontro el conector <<")
                        errores += 1
                elif linea.find("cin") != -1 :
                    if linea.find(">>") == -1 and linea.find("ignore") == -1 and linea.find("using") == -1 and linea.find("getline") == -1:
                        print("Error en la linea " + str(numLineas) +  ": No se encontro el conector >>")
                        errores += 1
                else:
                    if linea.find("#include") != -1 and linea.find("<") != -1 and linea.find(">") != -1 :
                        librerias.append(linea.split("#include")[1].strip())
                    for tipVar in tipoVariable:
                        if linea.find(tipVar) != -1:
                            if linea.find(",") != -1:
                                for v in linea.split(tipVar)[1].split(","):
                                    if v.find("\"") == -1:
                                        variables.append(v.split("=")[0].split(";")[0].split("(")[0].strip())
                            else:
                                variables.append(linea.split(tipVar)[1].split("=")[0].split(";")[0].split("(")[0].strip())
                    for estr in estructuras:#Acá sabra si la linea es una estructura
                        if linea.find(estr) != -1 and linea.find("(") != -1 and linea.find(")") != -1 :
                            i=0
                            ca = 0 #Cantidad de parentesis
                            for c in linea:
                                if c=="(":
                                    ca += 1
                                if c == ")":
                                    ca -= 1
                            if ca > 0:
                                print("Error en la linea " + str(numLineas) + ", la posicion de los parentesis no es correcta")
                                errores += 1

                            for var in variables:
                                if (((linea.find("("+var) != -1 or linea.find(" "+var) != -1 or linea.find("!"+var) != -1) and (linea.find(var+")") != -1 or linea.find(var+" ") != -1 or linea.find(var+" ")))):
                                    i = 1
                            if i == 0:
                                    print ("Error en la linea " + str(numLineas) + ", esta variable no existe")
        
    print("Variables encontradas: ")
    print("Lineas de codigo totales: " + str(numLineas))#Acá dira la cantidad de lineas
    if cantCorch > 0:
        print("Se deben revisar los corchetes!")#Acá dira si el proyecto corre o no por los corchetes
        errores += 1
    print("Cantidad de errores: "+ str(errores))