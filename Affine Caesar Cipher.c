#include <stdio.h>
#include <ctype.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    char text[100];
    int a, b, i, p, c;

    printf("Enter plaintext: ");
    scanf("%s", text);

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if (gcd(a, 26) != 1) {
        printf("Invalid value of a");
        return 0;
    }

    printf("Ciphertext: ");

    for (i = 0; text[i] != '\0'; i++) {
        p = toupper(text[i]) - 'A';
        c = (a * p + b) % 26;
        printf("%c", c + 'A');
    }

    return 0;
}
