import datetime
import xlrd


archivo = "C:\\Users\\PC\\Documents\\Backup\\Segundo trimestre\\Asistencias.xlsx"
f = xlrd.open_workbook(archivo)
now = datetime.datetime.now()
#print(now.strftime("%A"))
horario = {'Monday' : [0, 1, 2, 3, 4], 'Tuesday' : [5, 6, 7], 'Wednesday' : [5, 7, 8], 'Thursday' : [6, 8, 0], 'Friday' : [1, 2, 3, 4]}
cantidadClases = len(horario[now.strftime("%A")])
texto = "*Inasistencias de Diseño | " + now.strftime("%d") + "/" + now.strftime("%m") + "/" + now.strftime("%y") + "*\n"
for i2 in range(0, cantidadClases):
    valor = ""
    nh = horario[now.strftime("%A")][i2]
    hoja = f.sheet_by_index(nh)
    texto = texto + "*"+f.sheet_names()[nh] + ":* \n"
    i = 1
    cant = 0
    while valor != "F":
        valor = hoja.cell_value(i, 2)
        if valor != "x" and valor != "F":
            if valor == "c":
                texto = texto + hoja.cell_value(i, 1) + " no activo la camara \n"
            elif valor == "a":
                texto = texto + hoja.cell_value(i, 1) + " no hubo interaccion en clase \n"
            elif valor == "t":
                texto = texto + hoja.cell_value(i, 1) + " llego tarde \n"
            elif valor=="p":
                texto = texto + hoja.cell_value(i, 1) + " no ingreso a clase, pero tiene permiso de coordinación\n"
            else:
                texto = texto + hoja.cell_value(i, 1) + "\n"
            cant += 1
        i += 1
    if cant == 0:
        texto = texto + "Curso completo!\n"

print(texto)