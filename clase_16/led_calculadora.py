import serial
from tkinter import *
import tkinter

valor = 0
arduinoData = serial.Serial('COM9',9600)

#Crear ventana
root = tkinter.Tk()
root.geometry("400x400")#W*H o ALT*ANCH

root.title("Mi calculadora")
root.resizable(FALSE, FALSE)
root.configure(background="#22DA95")

############################

def btnClik(valor):
    global operador
    operador=operador+str(valor)
    input_text.set(operador)
def clear():
    global operador
    operador=("")
    input_text.set(operador)
def operacion():
    global operador
    try:
        opera=str(eval(operador))#sirve para realizar
        arduinoData.write(b'3')
        print("ok")
    except:
        clear()
        opera=("ERROR")
    input_text.set(opera)#muestra el resultado
############################

input_text=StringVar()
operador=""

Display=Entry(root,font=('arial',20,'bold'),width=25,bd=7,insertwidth=3,bg="#32F3CA",justify="center",textvariable=input_text).place(x=9,y=20)

Boton1=Button(root,text="1",width=6,height=3,command=lambda:btnClik(1)).place(x=10,y=85)
Boton2=Button(root,text="2",width=6,height=3,command=lambda:btnClik(2)).place(x=70,y=85)
Boton3=Button(root,text="3",width=6,height=3,command=lambda:btnClik(3)).place(x=130,y=85)
Boton10=Button(root,text="+",width=6,height=8,command=lambda:btnClik('+')).place(x=220,y=85)
Boton11=Button(root,text="-",width=6,height=3,command=lambda:btnClik('-')).place(x=280,y=85)
Boton12=Button(root,text="*",width=6,height=3,command=lambda:btnClik('*')).place(x=340,y=85)
BotonI=Button(root,text="=",width=6,height=3,command=operacion).place(x=340,y=340)
Botonc=Button(root,text="clear",width=6,height=3,command=clear).place(x=280,y=340)

root.mainloop()
