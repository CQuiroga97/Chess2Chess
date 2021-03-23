import win32api
import speech_recognition as sr 
from win32con import *
r = sr.Recognizer()  
while(1):
    try: 
        with sr.Microphone() as source2: 
            r.adjust_for_ambient_noise(source2, duration=0.2) 
            audio2 = r.listen(source2) 
            MyText = r.recognize_google(audio2) 
            MyText = MyText.lower() 
            print(MyText) 
            if(MyText == "play"):
                win32api.keybd_event(VK_MEDIA_PLAY_PAUSE, 0)
            elif(MyText == "stop"):
                win32api.keybd_event(VK_MEDIA_PLAY_PAUSE, 0)
    except sr.RequestError as e: 
        print("Could not request results; {0}".format(e)) 
          
    except sr.UnknownValueError: 
        print("unknown error occured")
    