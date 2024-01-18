import sys
import os

def read_file():
    line = ""
    file_name = ""
    print("What file do you want to open?\n")
    file_name = input("Name file: ")
    try:
        f = open(f'%s' % file_name)
        print("Text in the file: ")
        f.read(1)
    except:
        print("No such file or directory")
    f.close()
    
def write_file():
    new_text = ""
    file_name = ""
    print("What file do you want to open?\n")
    file_name = input("Name file: ")
    f = open(f'%s' % file_name, 'w')
    new_text = input("Text in the file: ")
    f.write(new_text)
    f.close()

    
    
def create_file():
    name_file = ""
    new_text = ""
    print("You create file\n");
    file_name = input("Name of the new file: ")
    f = open(f'%s' % file_name, 'w')
    new_text = input("What do you wanna write in it: ")
    f.write(new_text)
    f.close()
    print("File is created!")

   
y = 900
while True:
    print("Welcome to Parrot Notes!\n What do you want to do?")
    print("1. Read file")
    print("2. Overwrite file")
    print("3. Create file")
    print("4. Exit")
    get_fun = input()
    match get_fun:
        case "1":
            read_file()

        case "2":
            write_file()

        case "3":
            create_file()
        case "4":
            sys.exit()
        case _:
            print("No option selected\n")
      

            