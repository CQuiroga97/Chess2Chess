from persona import persona
class estudiante(persona):
    def __init__(self, materias, curso, id, nombre, apellido):
        persona.__init__(self, id, nombre, apellido)
        self.materias = materias
        self.curso = curso