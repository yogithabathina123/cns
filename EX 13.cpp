#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char text[200], p[200], c[200];
int i, n = 0, a, b, x, y;

```
int k[2][2] = {{9, 4}, {5, 7}};
int inv[2][2] = {{7, 22}, {21, 9}};

printf("Enter plaintext: ");
fgets(text, sizeof(text), stdin);

for (i = 0; text[i]; i++)
    if (isalpha((unsigned char)text[i]))
        p[n++] = tolower((unsigned char)text[i]);

if (n % 2 != 0)
    p[n++] = 'x';

p[n] = '\0';

printf("\nPlaintext: %s\n", p);
printf("\nEncrypted ciphertext: ");

for (i = 0; i < n; i += 2) {
    a = p[i] - 'a';
    b = p[i + 1] - 'a';

    x = (k[0][0] * a + k[0][1] * b) % 26;
    y = (k[1][0] * a + k[1][1] * b) % 26;

    c[i] = x + 'a';
    c[i + 1] = y + 'a';

    printf("%c%c", c[i], c[i + 1]);
}

c[n] = '\0';

printf("\n\nDecrypted plaintext: ");

for (i = 0; i < n; i += 2) {
    a = c[i] - 'a';
    b = c[i + 1] - 'a';

    x = (inv[0][0] * a + inv[0][1] * b) % 26;
    y = (inv[1][0] * a + inv[1][1] * b) % 26;

    printf("%c%c", (x + 26) % 26 + 'a',
                   (y + 26) % 26 + 'a');
}

printf("\n");
return 0;
```

}

