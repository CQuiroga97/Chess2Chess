#Metodos
#Existen 4 tipos de metodos: 
#Sin argumentos y sin retorno
def met1():
    print("Hola, soy un metodo!")
    print("asd")
#Con argumentos y sin retorno
def met2(a):
    print("Hola, soy un metodo con el argumento " + str(a))
#Sin argumentos y con retorno
def met3():
    return 5
    
#Con argumentos y con retorno
def met4(a):
    return a
met1()