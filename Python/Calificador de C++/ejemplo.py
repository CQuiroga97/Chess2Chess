
estructuras = ["while", "switch", "if ", "if("]
tipoVariable = ["int ", "string ", "ofstream ", "ifstream ", "char ", "float "]
condiciones = ["==", "<", ">", "!=", "<=", ">=", "!"]
operadores = ["=", "+", "*", "/"]
std = ["cout", "cin", "break", "}", "<<", ">>", "return"]
estructura = ""
tipo = ""
variables = []
librerias = []

#Definicion de linea conteniendo un metodo
def esMetodo(linea):
    if linea.find("(") != -1 and linea.find(")") != -1:
        return True
    return False

#Definicion de linea conteniendo un comentario
def esComentario(linea):
    if linea.find("//") != -1 or linea.find("/*") != -1:
        return True
    return False

#Definicion de linea conteniendo un comentario
def esEstructura(linea):
    for e in estructuras:
        if linea.find(e) != -1:
            if e!="switch":
                for i in condiciones:
                    if(linea.find(i) != -1):
                        #print(e + " encontrado")
                        return True
            else:
                #print(e + " encontrado")
                return True

            
    return False
    
#Definicion de linea conteniendo un caso
def esCaso(linea):
    if linea.find(":") != -1 and linea.find("case") != -1:
        return True
    return False

#Definicion de linea conteniendo una declaracion
def esDef(linea):
    for i in tipoVariable:
        if linea.find(i) != -1:
            #print(i + " encontrado")
            if linea.find(","):
                for v in linea.split(i)[1].split(","):
                    if v.find("\"") == -1:
                        variables.append(v.split("=")[0].split(";")[0].split("(")[0].strip())
            else:
                variables.append(linea.split(i)[1].split(";")[0].split("=")[0])

            return True
    return False

#Definicion de linea conteniendo una libreria
def esLib(linea):
    if linea.find("include") != -1:
        librerias.append(linea.split("<")[1].split(">")[0])
        return True
    if linea.find("using") != -1:
        librerias.append(linea.split("namespace")[1])
        return True
    return False

#Definicion de linea conteniendo una libreria
def esLineaCorriente(linea):
    if linea.find(";") == -1:
        return False
    for i in operadores:
        if linea.find(i) != -1:
            return True
    for i in std:
        if linea.find(i) != -1:
            return True
    return False

cantCorch = 0
ruta = "C:\\Users\\quiro\\OneDrive\\Documentos\\Python\\Calificador de C++\\SUMATIVA\\Miguel Montealegre,Laura Daza,Santiago Aguirre\\santiago aguirre\\diseño sumativa.cpp"


errores = 0
file = open(ruta, "r")
lineas = file.readlines()
numLineas = 0

for contenido in lineas:
    numLineas += 1
    linea = contenido.strip()
    if linea:
        if not(esComentario(linea)):
            if linea.find("{") != -1:
                cantCorch += 1

            if linea.find("}") != -1:
                cantCorch -= 1
                #print("Corchete cerrado encontrada en la linea " + str(numLineas))
            elif(esMetodo(linea)):
                if(esEstructura(linea)):
                    None
                    #print("Estructura encontrada en la linea " + str(numLineas))
                else:
                    None
                    #print("Funcion encontrada en la linea " + str(numLineas))
            elif(esCaso(linea)):
                None
                #print("Caso encontrado en la linea " + str(numLineas))
            elif(esLib(linea)):
                None
                #print("Libreria encontrada en la linea " + str(numLineas))
            elif(esDef(linea)):
                None
                #print("Definicion encontrada en la linea " + str(numLineas))
            elif(esLineaCorriente(linea)):
                None
                #print("Linea encontrada en la linea " + str(numLineas))
            else:
                print("Error en la linea " + str(numLineas))
                errores += 1
        

print ("Total de variables: " + str(len(variables)))
print ("Total de librerias: " + str(len(librerias)))
if cantCorch > 1:
    print("Los corchetes estan mal cerrados")