#include <stdio.h>
#include <string.h>

int main() {
char c[200];
int i, x, p;
int a = 3, b = 15, inv = 9;

```
printf("Enter ciphertext: ");
fgets(c, sizeof(c), stdin);

printf("Decrypted text: ");

for (i = 0; c[i] != '\0'; i++) {
    if (c[i] >= 'A' && c[i] <= 'Z') {
        x = c[i] - 'A';
        p = (inv * (x - b + 26)) % 26;
        printf("%c", p + 'A');
    }
    else if (c[i] >= 'a' && c[i] <= 'z') {
        x = c[i] - 'a';
        p = (inv * (x - b + 26)) % 26;
        printf("%c", p + 'a');
    }
    else {
        printf("%c", c[i]);
    }
}

return 0;
```

}

