from persona import persona
from empleado import empleado
class profesor(persona, empleado):
    __materia = None
    def __init__(self, id, nombre, apellido, horas, salario):
        persona.__init__(self, id, nombre, apellido)
        empleado.__init__(self, horas, salario)
    def firma(self):
        print("Profesor " + self.nombre + " " + self.apellido)
    def setMateria(self, materia):
        self.__materia = materia
    def getMateria(self):
        return self.__materia