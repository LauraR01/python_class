#login.py
from tkinter import *

def menuWindow():
    ventana2=Tk()
    ventana2.title("Menu de Control")
    ventana2.geometry("400x200")

ventana_login=Tk()
ventana_login.title("Login")
ventana_login.geometry("300x400")
ventana_login.resizable(FALSE,FALSE)
ventana_login.configure(background="#33FFC3")
color_boton=("gray77")

BotonAcceso=Button(ventana_login,text="ingresar",width=30,height=3,command=menuWindow).place(x=45,y=300)


ventana_login.mainloop()
