import datetime
import pyttsx3
import win32gui
from macro.bot import bot
import ast 
import subprocess

engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)
engine.say("HOLA")
engine.runAndWait()
lista = []
def hablar(frase):
    engine.say(frase)
    engine.runAndWait()
bibliotecas = open("C:\\Users\\PC\\Documents\\Backup\\Proyectos Python\\Python\\Contro de asistencias\\bibliotecas.txt", "r")
for lineas in bibliotecas:
    lista.append(lineas)
bibliotecas.close()

while(True):
    now = datetime.datetime.now()
    for lineas in lista:
        b = ast.literal_eval(lineas)
        if(now.hour > 12):
            hora = now.hour - 12
        else:
            hora = now.hour
        if(str(now.hour) == b["hora"] and str(now.minute) == b["minutos"] and str(now.strftime("%A")) == b["dia"]):
            print("3")
            hablar("Comenzando la clase de las " + str(hora) + " y " + str(now.minute) + " con " + b["curso"])
            print("1")
            subprocess.Popen(['C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe'])
            print("1.5")
            bot.delay(2)
            flag = 1
            cantTab = 1
            flagTab = 1
            while(True):
                if flagTab == 2:
                    bot.alt_tab(1)
                    bot.delay(1)
                ven = win32gui.GetWindowText(win32gui.GetForegroundWindow())
                print(ven)
                if(ven.find("Google Chrome")!=-1):
                    break
                else:
                    flagTab = 2
                    hablar("Algo ha pasado con Chrome, buscaré la ventana")
                    bot.alt_tab(cantTab)
                    cantTab+=1
                    bot.delay(1)
                    ven = win32gui.GetWindowText(win32gui.GetForegroundWindow())
                    if(ven.find("Google Chrome")!=-1):
                        break


            while(True):

                bot.press_and_tap("alt", "d")
                bot.type_string("meet.google.com", pre_dl = 2)
                bot.press_and_tap("shift", 7)
                bot.type_string("landing?authuser")
                bot.press_and_tap("shift", 0)
                bot.type_string("1")
                bot.enter(1, pre_dl=0.5)
                bot.enter(1, pre_dl=4, post_dl=1)
                bot.delay(1)
                bot.type_string(b["curso"]+"_"+str(now.day)+"_"+str(now.month)+"_"+str(now.year))
                bot.enter(1, pre_dl=1)
                bot.delay(5)
                ven = win32gui.GetWindowText(win32gui.GetForegroundWindow())
                print(ven)
                if(ven != "Meet - Google Chrome"):
                    break
                else:
                    hablar("He presentado un problema al crear la llamada, volveré a intentarlo")
            bot.delay(4)
            hablar("Desactivando cámara y micrófono")
            bot.press_and_tap("ctrl", "e")
            bot.press_and_tap("ctrl", "d")
            bot.tab(5, pre_dl=5)
            bot.enter(1, pre_dl=1)
            hablar("La clase ha sido creada, ahora enviaré el link al classroom")
            bot.tab(1, pre_dl=2)
            bot.enter(1)
            bot.press_and_tap("ctrl", "t", post_dl=1)
            bot.type_string("classroom.google.com")
            bot.press_and_tap("shift", "7")
            bot.type_string("u")
            bot.press_and_tap("shift", "7")
            bot.type_string("2")
            bot.press_and_tap("shift", "7")
            bot.type_string("c")
            bot.press_and_tap("shift", "7")
            bot.type_string(b["classroom"])
            bot.enter(1, pre_dl=1)
            bot.tab(1, pre_dl=10)
            bot.enter(1, post_dl=1)
            bot.type_string("Hola, " + b["curso"])
            bot.enter(1)
            bot.type_string("Comenzaremos la clase en meet, DEBEN INGRESAR CON LA CAMARA ENCENDIDA O SERAN EXPULSADOS, aca el vinculo:")
            bot.enter(1)
            bot.press_and_tap("ctrl", "v")
            bot.tab(3)
            bot.enter(1)
            bot.delay(30)
            
    bot.delay(1)
