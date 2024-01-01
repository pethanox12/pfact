//
//  main.c
//  pfact
//
//  Created by Adrian Talbot on 01/01/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char    greeting[40];
    
    if (argc > 1) {
        strncpy(greeting, argv[1], 40);
    } else {
        strcpy(greeting, "please provide your name next time");
    }
    printf("Hello, %s.\n", greeting);
    return 0;
}
