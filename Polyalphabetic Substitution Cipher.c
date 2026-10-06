#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[100], key[100];
    int i, j = 0, shift;

    printf("Enter plaintext: ");
    scanf("%s", text);

    printf("Enter key: ");
    scanf("%s", key);

    printf("Ciphertext: ");

    for (i = 0; text[i] != '\0'; i++) {
        shift = toupper(key[j]) - 'A';

        printf("%c", ((toupper(text[i]) - 'A' + shift) % 26) + 'A');

        j++;

        if (key[j] == '\0')
            j = 0;
    }

    return 0;
}
