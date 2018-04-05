#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main(int argc, string argv[])
{
    // Check if the user did not enter a command line argument.
    if(argc == 1) {
        printf("You did not enter a command line argument \n");

        return 1;
    }

    // Check if the user entered more than one command line argument.
    else if (argc > 2){
        printf("You entered too many command line arguments \n");

        return 1;
    }

    else {

        int key = atoi(argv[1]);


        string msg = get_string();

        int ASCII_A = 65;
        int ascii_a = 97;
        int len_alphabet = 26;

        for (int i = 0, n = strlen(msg); i < n; i++) {


            if (isupper(msg[i]))
                printf("%c", ((msg[i] - ASCII_A + key) % len_alphabet) + ASCII_A);


            else if (islower(msg[i]))
                printf("%c", ((msg[i] - ascii_a + key) % len_alphabet) + ascii_a);


            else
                printf("%c", msg[i]);
        }
    }

    // Exit cleanly.
    printf("\n");
    return 0;
}
