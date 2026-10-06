#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100], key[27] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int i, index;

    printf("Enter plaintext: ");
    fgets(text, sizeof(text), stdin);

    printf("Ciphertext: ");

    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            index = toupper(text[i]) - 'A';
            printf("%c", key[index]);
        } else {
            printf("%c", text[i]);
        }
    }

    return 0;
}
