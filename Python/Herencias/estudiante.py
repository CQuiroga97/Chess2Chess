from persona import per
class estudiante(per):
    def __init__(self,  nombre, edad, notas, promedio):
        per.__init__(self, nombre, edad)
        self.notas = notas
        self.promedio = promedio
    def setNotas(self, notas):
        self.notas = notas