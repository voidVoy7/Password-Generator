#include "sodium/core.h"
#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>

int main(void) {
    if(sodium_init() < 0) {
        fprintf(stderr, "Failed to initialize libsodium!");
        return 1;
    }

    int lenght = 0;
    printf("Enter the password lenght: ");
    scanf("%d", &lenght);

    const char charset[] = 
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "!@#$^&*()-_=+"
        "0123456789";
    int charset_size = sizeof(charset);

    char *password = malloc(lenght + 1);

    for(int i = 0; i < lenght; i++) {
        unsigned int index = randombytes_uniform(charset_size);
        password[i] = charset[index];
    }
    password[lenght] = '\0';

    printf("Your password is: %s\n", password);

    free(password);
    return 0;
}