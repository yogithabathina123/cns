#include <stdio.h>
#include <ctype.h>
#include <string.h>

char key[5][5] = {
{'M','F','H','I','K'},
{'U','N','O','P','Q'},
{'Z','V','W','X','Y'},
{'E','L','A','R','G'},
{'D','S','T','B','C'}
};

void find(char ch, int *r, int *c) {
int i, j;
if (ch == 'J') ch = 'I';

```
for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
        if (key[i][j] == ch) {
            *r = i;
            *c = j;
            return;
        }
```

}

int main() {
char msg[] = "Must see you over Cadogan West. Coming at once.";
char p[200], a, b;
int i, j = 0, r1, c1, r2, c2;

```
for (i = 0; msg[i]; i++) {
    if (isalpha((unsigned char)msg[i])) {
        a = toupper((unsigned char)msg[i]);
        if (a == 'J') a = 'I';
        p[j++] = a;
    }
}
p[j] = '\0';

if (j % 2 != 0) p[j++] = 'X';

printf("Ciphertext: ");

for (i = 0; i < j; i += 2) {
    a = p[i];
    b = p[i + 1];

    if (a == b) {
        b = 'X';
        memmove(p + i + 2, p + i + 1, j - i);
        p[i + 1] = b;
        j++;
    }

    find(a, &r1, &c1);
    find(b, &r2, &c2);

    if (r1 == r2) {
        printf("%c%c", key[r1][(c1 + 1) % 5],
                        key[r2][(c2 + 1) % 5]);
    } else if (c1 == c2) {
        printf("%c%c", key[(r1 + 1) % 5][c1],
                        key[(r2 + 1) % 5][c2]);
    } else {
        printf("%c%c", key[r1][c2], key[r2][c1]);
    }
}

printf("\n");
return 0;
```

}

