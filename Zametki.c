#include <stdio.h>
#include <stdlib.h>

void read_file(){
    char line[255];
    char name_file[15];
    printf("What file do you want to open?\n");
    printf("Name file: ");
    scanf("%s", &name_file);
    FILE *file = fopen(name_file, "r");
    printf("Text in file: \n");
    fgets(line, 255, file);
    printf("%s", line);
    fclose(file);
};

void owerwrote(){
    char wrote[666];
    char name_file[15];
    printf("What file do you want to open?\n");
    printf("Name file: ");
    scanf("%s", &name_file);
    FILE *file = fopen(name_file, "w");
    scanf("%s", &wrote);
    fprintf(file, "%s", &wrote);
    printf("Overwritten successfully!");
    fclose(file);
}
void create_filee(){
    char name_file[15];
    char wrote[666];
    printf("You create file\n");
    printf("Name created file: ");
    scanf("%s", &name_file);
    FILE *file = fopen(name_file, "w");
    printf("What to write in it?\n");
    scanf("%s", &wrote);
    fprintf(file, "%s", wrote);
    printf("File is create!");
}


int main(){
    char ch;
    char cha;
    char v;
    char y;
    do {
        printf("\nWelcome to Parrot Notes!\n What do you want to do?\n");
        printf("1. Read file\n");
        printf("2. Overwrite file\n");
        printf("3. Create file\n");
        printf("4. Exit\n");
        ch = getchar();      
            switch(ch){
            case '1':
                read_file();
            break;
                
            case '2':
                owerwrote();
            break;
            case '3' :
                create_filee();
            break;
            case '4' :
                system ("pause");
            break;    
            default  :
                printf("No option selected\n");
                break;
            }
       scanf("%c", &cha);
    }while (y = cha);
return 0;
}