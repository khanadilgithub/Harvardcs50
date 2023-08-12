import pyfiglet

userinput= input("Enter the text: ")

figlettext=pyfiglet.figlet_format(f"{userinput}", font = "slant")
print(figlettext)
