#include <stdio.h>

int main() {
int a, b, i;
char p[100];

```
printf("Enter plaintext: ");
scanf("%99s", p);

printf("Enter values of a and b: ");
scanf("%d %d", &a, &b);

if (a < 0 || a > 25 || b < 0 || b > 25 ||
    a % 2 == 0 || a == 13) {
    printf("Invalid values of a or b\n");
    return 0;
}

printf("Ciphertext: ");
for (i = 0; p[i] != '\0'; i++) {
    if (p[i] >= 'A' && p[i] <= 'Z')
        printf("%c", ((a * (p[i] - 'A') + b) % 26) + 'A');
    else if (p[i] >= 'a' && p[i] <= 'z')
        printf("%c", ((a * (p[i] - 'a') + b) % 26) + 'a');
    else
        printf("%c", p[i]);
}

printf("\n");
return 0;
```

}

