from persona import persona
from empleado import empleado
class coordinador(persona, empleado):
    def __init__(self, seccion, id, nombre, apellido, horas, salario):
        persona.__init__(self, id, nombre, apellido)
        empleado.__init__(self, horas, salario)
        self.seccion = seccion

    def firma(self):
        print("Coordinador " + self.nombre + " " + self.apellido)