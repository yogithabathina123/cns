#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char p[100], key[] = "CIPHER";
char cipher[27], used[26] = {0};
int i, j = 0;

```
for (i = 0; key[i] != '\0'; i++) {
    char ch = toupper(key[i]);
    if (!used[ch - 'A']) {
        cipher[j++] = ch;
        used[ch - 'A'] = 1;
    }
}

for (i = 0; i < 26; i++)
    if (!used[i])
        cipher[j++] = 'A' + i;

cipher[26] = '\0';

printf("Enter plaintext: ");
fgets(p, sizeof(p), stdin);

printf("Ciphertext: ");
for (i = 0; p[i] != '\0'; i++) {
    if (isalpha((unsigned char)p[i])) {
        char ch = toupper((unsigned char)p[i]);
        printf("%c", cipher[ch - 'A']);
    } else {
        printf("%c", p[i]);
    }
}

printf("\n");
return 0;
```

}

