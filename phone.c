#include<stdio.h>
#include<string.h>
#include<cs50.h> // Add this line if you are using CS50's get_string function

int main(void){

    FILE *file = fopen("phonebook.csv", "w");

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file,"%s,%s\n", name,number);

    fclose(file);
    return 0;
}