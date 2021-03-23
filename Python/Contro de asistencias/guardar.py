import ast 
import xlrd

def normalize(s):
    replacements = (
        ("á", "a"),
        ("é", "e"),
        ("í", "i"),
        ("ó", "o"),
        ("ú", "u"),
    )
    for a, b in replacements:
        s = s.replace(a, b).replace(a.upper(), b.upper())
    return s
asis = []
lista = []
file = open("chat.txt", "r", encoding='utf-8')
lineas = file.readlines()
for contenido in lineas:
    txt = normalize(contenido.split("From")[1].split(":")[0].split("to")[0].split("  ")[1].lower()) + "                   "
    txt = txt.strip()
    
    if(lista.count(txt) < 1):
        lista.append(txt)

file.close()
archivo = "C:\\Users\\quiro\\OneDrive\\Documentos\\Domingo Savio 2020\\Segundo trimestre\\Asistencias.xlsx"
f = xlrd.open_workbook(archivo)
hoja = f.sheet_by_index(8)
valor = ""
info = ""
i = 1
while valor != "F":
    name = ""
    valor = hoja.cell_value(i, 2)
    if valor != "x" and valor != "F":
        info = normalize(hoja.cell_value(i, 1).lower())
        
        for contenido in lista:
            flag = 0
            nombre = contenido.split(" ")
            for n in nombre:
                if n != "":
                    #print(n + "a")
                    if info.find(n) != -1:
                        flag += 1
                        print(repr(contenido) + " en " + info)
            if flag > 1:
                asis.append(info)
                break     
                

        
    i += 1
for inf in asis:
    print(inf)
print(str(len(asis)))