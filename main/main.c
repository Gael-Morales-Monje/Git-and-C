#include<stdio.h>

#include<string.h>

int main() {

    FILE *file;

    file = fopen("../text/text.txt","r");

    char letra[8];

    

    while (fscanf(file,"%s",letra) != EOF) {
        printf("%s ",letra);

    }

    fclose(file);



    // printf("----%s",letra);


    return 0;
}