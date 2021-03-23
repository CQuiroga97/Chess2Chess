from estudiante import estudiante
from profesor import profesor
class prueba():
    
    def __init__(self, estudiante, profesor):
        self.estudiante = estudiante
        self.profesor = profesor
        self.objEstudiante = None
        self.objProfesor = None
    def crearEstudiante(self):
        self.objEstudiante = self.estudiante(input("Ingresar nombre del estudiante: "), input("Ingresar edad del estudiante: "), None, 5)
    def agregarNotas(self, notas):
        self.objEstudiante.setNotas(notas)
    def crearProfesor(self):
        self.objProfesor = self.profesor(input("Ingresar nombre del estudiante: "), input("Ingresar edad del estudiante: "), input("Ingrese nombre de la materia: "))



prueba = prueba(estudiante, profesor)
prueba.crearEstudiante()
prueba.agregarNotas([1, 5, 6])
print(prueba.objEstudiante.nombre)