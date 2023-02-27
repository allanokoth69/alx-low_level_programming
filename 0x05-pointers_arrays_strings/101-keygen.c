#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- passwords
 * Return : 0 success
 *
 */
#define PASSWORD_LENGTH 8

int main() {
    char password[PASSWORD_LENGTH + 1];
    int i, rand_num;

    srand(time(NULL)); // Seed the random number generator with the current time

    printf("Generating a random valid password for 101 Crack Me...\n");

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        rand_num = rand() % 62; // Generate a random number between 0 and 61
        if (rand_num < 26) {
            // Generate a random uppercase letter
            password[i] = 'A' + rand_num;
        } else if (rand_num < 52) {
            // Generate a random lowercase letter
            password[i] = 'a' + rand_num - 26;
        } else {
            // Generate a random digit
            password[i] = '0' + rand_num - 52;
        }
    }

    password[PASSWORD_LENGTH] = '\0'; // Null terminate the password string

    printf("Generated password: %s\n", password);

    return 0;
}
