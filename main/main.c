#include<stdio.h>

#include<string.h>

int main() {

    FILE *file;

    file = fopen("../text/text.txt","r");

    char letra[8];

    fscanf(file,"%s",letra);


    fclose(file);



    printf("----%s",letra);
    printf("hola");


    return 0;
}