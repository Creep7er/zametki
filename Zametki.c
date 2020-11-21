#include <stdio.h>

int main(){
    char ch;
    char wrote[15];
    char line[255];
    char name_file[15];
    int flag = 15;
    FILE *file = fopen("My.txt", "r+");


    printf("Welcome to Parrot Notes!\n What do you want to do?\n");
    printf("1. Read file\n");
    printf("2. Overwrite file\n");
    printf("3. Create file\n");
    ch = getchar();

    switch(ch){
    case '1':
        printf("Text in file: \n");
        fgets(line, 255, file);
        printf("%s", line);
        fclose(file);
    break;
    
    case '2':
        fscanf(file, "%c", wrote);
        printf("Overwritten successfully!");
        fclose(file);
    break;
    case '3' :
    
    break;
    
    default  :
        printf("No option selected");
    }


    return 0;

}