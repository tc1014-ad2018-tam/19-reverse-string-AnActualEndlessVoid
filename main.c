/*
 * This program was made to return the string input, in reverse order
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/18/2018
 *
 */
#include <stdio.h>
#include <string.h>


int main(void) {
    char str[1000];
    int i;
//Getting the string from the user
    printf("Give me a series of characters:\n");
    fgets (str, sizeof(str), stdin);

    printf ("\n\n");

    printf ("Your string, in reverse order:\n");
    //The loop will read and print the characters, from the last one to the first
    for (i = strlen(str); i >= 0; i--)
    {
        printf ("%c", str[i]);
    }
    return 0;
}