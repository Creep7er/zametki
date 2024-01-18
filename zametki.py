import os

def read_file():
    line = ""
    file_name = ""
    print("What file do you want to open?\n")
    file_name = input("Name file: ")
    f = open(f'%s!' % file_name)
    print("Text in the file: ")
    f.read(1)
    f.close()
    
def write_file():
    new_text = ""
    file_name = ""
    print("What file do you want to open?\n")
    file_name = input("Name file: ")
    f = open(f'%s!' % file_name, 'w')
    new_text = input("Text in the file: ")
    f.write(new_text)
    f.close()
    
write_file()