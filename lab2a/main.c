#include <stdio.h>  //printf, fprintf
#include <stdlib.h> //EXIT_SUCCESS
#include <string.h> //strlen, strcmp
#define TOO_MANY_ARGS 2
#define TOO_FEW_ARGS 1

/*Name: Tahmid Sajin, Section: 2, COE 628 Lab 2, EE Username: tsajin
 Note: I have used the 'goodbye' command in this lab as I am using a Linux system computer. If the
 code does not work with 'goodbye' command, please use the 'bye' command as it will use the last three characters. Thanks.*/

int main(int argc, char* argv[]) {
    //Default values:
    int exit_code = EXIT_SUCCESS;
    char * greeting = "Hello";
    char * person = "UNKNOWN";
    
    //Add code to change the exit_code depending on argc
    if (argc == 1) {
        exit_code = 0;
    } else if (argc == 0) {
        exit_code = 1;
    } else if (argc > 1) {
        exit_code = 2;
    }
    
    //Add code to change 'person' if one is given on command line
    person = argv[1];
    
    int len = strlen(argv[0]);
    char * last3 = argv[0] + len - 3; //last3 points to last 3 chars
    /*fprintf(stderr, "%s\n", argv[0]);
    fprintf(stderr, "%s\n", last3);*/
    
    //Add code to change 'greeting' if last 3 chars of command are 'bye'
    if (strcmp(last3, "bye") == 0) {
        greeting = "Bye";
    }
    
    printf("%s %s\n", greeting, person);
    /*fprintf(stderr, "exit_code: %d\n", exit_code);*/
    
    return exit_code; //Could also say exit(exit_code)
}
