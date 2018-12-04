#IMPORTAR LIBRERIAS
from tkinter import *
import tkinter
import serial

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

def On_Off (numero):
    arduinoData.write(b'numero')
    print ("encendido")

def menu():
    global v_2
    v_2 = tkinter.Tk()
    v_2.title("Menu principal")
    v_2.geometry("400x400")
    v_2.resizable(FALSE,FALSE)
    b_m_Sala = Button (v_2, text = "Sala",width=15,height=2,command=Sala).place(x=30,y=30)
    b_m_ga = Button (v_2, text = "Garaje",width=15,height=2,command=Garaje).place(x=30,y=100)
    b_hab = Button (v_2, text = "Habitacion",width=15,height=2,command=Habitacion).place(x=150,y=30)
    b_baño = Button (v_2, text = "Baño",width=15,height=2,command=Baño).place(x=270,y=100)
    b_lav = Button (v_2, text = "Lavadero",width=15,height=2,command=Lavadero).place(x=150,y=100)
    b_sem = Button (v_2, text = "semaforo",width=15,height=2,command=lambda:On_Off(12)).place(x=270,y=30)

def Sala_Cocina():
    global v_3
    v_3 = tkinter.Tk()
    v_3.title("Sala")
    v_3.geometry("400x400")
    v_3.resizable(FALSE,FALSE)
    v_3.configure(background="#000000")
    b_Luz_s = Button(v_3,text="on/off Luz",width=10,height=2,command=lambda:On_Off(0)).place(x=30,y=30)
    b_door_p = Button(v_3,text="puerta principal",width=15,height = 2, command = lambda:On_Off(13)).place(x=120,y=30)
    b_luz_cocina =Button(v_3,text="Luz de la cocina",width=15,height = 2, command = lambda:On_Off(1)).place(x=240,y=30)
    b_estufa =Button(v_3,text="Estufa",width=5,height = 2, command = Estufa).place(x=30,y=80)

def Garaje():
    global v_5
    v_5 = tkinter.Tk()
    v_5.title("VENTILADORES")
    v_5.geometry("400x400")
    v_5.resizable(FALSE,FALSE)
    b_Luz = Button(v_5, text = "Luz", width = 15 , height = 2, command = lambda:On_Off(2)).place(x=31.5,y=15)
    b_door = Button(v_5, text = "Puerta Garaje", width = 15 , height = 2, command = lambda:On_Off(14)).place(x=31.5,y=60)
    b_t_g = Button(v_5, text = "Temp", width = 15 , height = 2, command = lambda:On_Off(10)).place(x=31.5,y=105)
    
def Estufa():
    global v_6
    v_6 = tkinter.Tk()
    v_6.title("Menu cocina")
    v_6.geometry("400x400")
    v_6.resizable(FALSE,FALSE)
    v_6.resizable(FALSE,FALSE)
    b_extractor = Button(v_6, text = "Temp", width = 15 , height = 2, command = lambda:On_Off(6)).place(x=31.5,y=15)
    b_Fogon1 = Button(ventana_10, text = "Fogon 1", width = 15 , height = 2, command = lambda:On_Off(7)).place(x=31.5,y=15)
    b_Fogon2 = Button(ventana_10, text = "Fogon 2", width = 15 , height = 2, command = lambda:On_Off(8)).place(x=31.5,y=15)
    b_Fogon3 = Button(ventana_10, text = "Fogon 3", width = 15 , height = 2, command = lambda:On_Off(9)).place(x=31.5,y=15)
    b_Fogon4 = Button(ventana_10, text = "Fogon 4", width = 15 , height = 2, command = lambda:On_Off(11)).place(x=31.5,y=15)  

def Habitacion():
    global v_7
    v_7 = tkinter.Tk()
    v_7.title("Menu de Control")
    v_7.geometry("175x130")
    v_7.resizable(FALSE,FALSE)
    b_Luz = Button(v_7, text = "Luz", width = 15 , height = 2, command = lambda:On_Off(4)).place(x=31.5,y=15)

def Baño():
    global v_8
    v_8 = tkinter.Tk()
    v_8.title("Menu de Control")
    v_8.geometry("175x130")
    v_8.resizable(FALSE,FALSE)
    b_Luz = Button(v_8, text = "Luz", width = 15 , height = 2, command = lambda:On_Off(3)).place(x=31.5,y=15)

def Lavadero():
    global v_9
    v_9 = tkinter.Tk()
    v_9.title("Menu de Control")
    v_9.geometry("175x130")
    v_9.resizable(FALSE,FALSE)
    b_Luz = Button(v_9, text = "Luz", width = 15 , height = 2, command = lambda:On_Off(5)).place(x=31.5,y=15)   

#############################

input_text_u = StringVar()
Screen_text = ""

input_text_k = StringVar()
Screen_text = ""

D_u = Entry(v_l,font=('Comic Sans MS',20,'bold'),width=25,bd=5,insertwidth=3,bg="#BCBBBF",justify="center",textvariable=input_text_u).place(x=40,y=140)
D_k = Entry(v_l,font=('Comic Sans MS',20,'bold'),width=25,bd=5,insertwidth=3,bg="#BCBBBF",justify="center",textvariable=input_text_k).place(x=40,y=260)

############################

B_Acceso = Button(v_l,text="ingresar",width=30,height=3,command=menu).place(x=140,y=360)
B_Help = Button(v_l,text="?",width=3,height=1,command=menu).place(x=237,y=440)

v_l.mainloop()
