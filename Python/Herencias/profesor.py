from persona import per
class profesor(per):
    def __init__(self,  nombre, edad, materias):
        per.__init__(self, nombre, edad)
        self.materias = materias