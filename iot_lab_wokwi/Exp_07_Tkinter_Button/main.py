import tkinter as tk
from tkinter import messagebox

def show_message():
    messagebox.showinfo("IoT Lab", "Hello! Welcome to IoT Lab")

root = tk.Tk()
root.title("IoT Lab GUI")
root.geometry("350x200")
tk.Label(root, text="Welcome to IoT Lab", font=("Arial", 16)).pack(pady=20)
tk.Button(root, text="Click Here", command=show_message).pack(pady=10)
root.mainloop()
