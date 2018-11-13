#IMPORTAR LIBRERIAS 
from tkinter import *
import tkinter

#############################
#CREAR VENTANA
v_l =tkinter.Tk()
v_l.title("LOGIN")
v_l.geometry("500x500")
v_l.resizable(FALSE,FALSE)
v_l.configure(background='#46E0EB')#color del fondo de la 1ra ventana
color_b=("gray77")
#############################


#VENTANAS

def menu():
    global v_2
    v_2 = tkinter.Tk()
    v_2.title("Menu principal")
    v_2.geometry("400x400")
    v_2.resizable(FALSE,FALSE)

def led():
    global v_3
    v_3 = tkinter.Tk()
    v_3.title("LEDs")
    v_3.geometry("400x400")
    v_3.resizable(FALSE,FALSE)

def ven():
    global v_4
    v_4 = tkinter.Tk()
    v_4.title("VENTILADORES")
    v_4.geometry("400x400")
    v_4.resizable(FALSE,FALSE)

def puertas():
    global v_5
    v_5 = tkinter.Tk()
    v_5.title("PUERTAS")
    v_5.geometry("400x400")
    v_5.resizable(FALSE,FALSE)

#############################

input_text_u = StringVar()
Screen_text = ""

input_text_k = StringVar()
Screen_text = ""

D_u=Entry(v_l,font=('Comic Sans MS',20,'bold'),width=25,bd=5,insertwidth=3,bg="#BCBBBF",justify="center",textvariable=input_text_u).place(x=40,y=140)
D_k=Entry(v_l,font=('Comic Sans MS',20,'bold'),width=25,bd=5,insertwidth=3,bg="#BCBBBF",justify="center",textvariable=input_text_k).place(x=40,y=260)

B_Acceso = Button(v_l,text="ingresar",width=30,height=3,command=menu).place(x=140,y=360)
B_Help = Button(v_l,text="?",width=3,height=1,command=menu).place(x=237,y=440)

v_l.mainloop()
