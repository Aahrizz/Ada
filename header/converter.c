#include <stdio.h>
#include <string.h>
#include "test.h"

int main() {

    printf("\n%.3f\n", PI);

    

    char message[50] = "The answer to your question is:"; 

    char answer[100];

    printf("%s\n", message);

    fgets(answer, sizeof(answer), stdin);

    printf("The answer to your question depends on what the user inputs!! It is, %s\n", answer);

   // strcpy(message, "Hail Mary full of grace!");

    
    
}