#facultad de ingenieria
#programa de ingenieria electronica 
#electiva de programacion-python 2C
#programa para control de arduino desde python
#gui_python_1.py

import serial
from tkinter import *
import tkinter

valor = 0
arduinoData = serial.Serial('COM9',9600)

def led_onOff(valor):
    arduinoData.write(b"valor")
    print("encender todo")
    
def led_on_a():
    arduinoData.write(b'6')
    print("encender todo")

def led_off_a():
    arduinoData.write(b'7')
    print("apagar todo")

led_control_window = Tk()
#Button = Tkinter.button
btn1 = Button(led_control_window, text="ON", command=lambda:led_onOff(0))
btn2 = Button(led_control_window, text="OFF", command=lambda:led_onOff(1))
btn3 = Button(led_control_window, text="ON", command=lambda:led_onOff(2))
btn4 = Button(led_control_window, text="OFF", command=lambda:led_onOff(3))
btn5 = Button(led_control_window, text="ON", command=lambda:led_onOff(4))
btn6 = Button(led_control_window, text="OFF", command=lambda:led_onOff(5))
btn7 = Button(led_control_window, text="ON  ALL", command=led_on_a)
btn8 = Button(led_control_window, text="OFF ALL", command=led_off_a)

btn1.grid(row=0,column=1)
btn2.grid(row=0,column=2)
btn3.grid(row=1,column=1)
btn4.grid(row=1,column=2)
btn5.grid(row=2,column=1)
btn6.grid(row=2,column=2)
btn7.grid(row=3,column=1)
btn8.grid(row=3,column=2)

led_control_window.mainloop()
