#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    int i, k;

    printf("Enter ciphertext: ");
    scanf("%s", c);

    printf("\nPossible plaintexts:\n");

    for(k = 0; k < 26; k++) {
        printf("Key %2d: ", k);
        for(i = 0; c[i]; i++)
            printf("%c", (c[i]-'A'-k+26)%26+'A');
        printf("\n");
    }
    return 0;
}
