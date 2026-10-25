#include <stdio.h>
#include <string.h>
#include <ctype.h>

char key[5][5];
int r1, c1, r2, c2;

void generateKey(char *k) {
int used[26] = {0}, i, j, n = 0;
char s[26];

```
used['J' - 'A'] = 1;

for (i = 0; k[i]; i++) {
    char ch = toupper(k[i]);
    if (ch == 'J') ch = 'I';

    if (ch >= 'A' && ch <= 'Z' && !used[ch - 'A']) {
        s[n++] = ch;
        used[ch - 'A'] = 1;
    }
}

for (i = 0; i < 26; i++)
    if (!used[i]) s[n++] = 'A' + i;

n = 0;
for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
        key[i][j] = s[n++];
```

}

void findPos(char ch, int *r, int *c) {
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
char keyword[100];
char cipher[] =
"KXJEYUREBEZWEHEWRYTUHEYFS"
"KREHEGOYFIWTTTUOLKSYCAJPO"
"BOTEIZONTXBYBNTGONEYCUZWR"
"GDSONSXBOUYWRHEBAAHYUSEDQ";

```
int i, a, b, c, d;

printf("Enter Playfair keyword: ");
scanf("%99s", keyword);

generateKey(keyword);

printf("Decrypted text: ");

for (i = 0; cipher[i] && cipher[i + 1]; i += 2) {
    findPos(cipher[i], &a, &b);
    findPos(cipher[i + 1], &c, &d);

    if (a == c) {
        printf("%c%c",
               key[a][(b + 4) % 5],
               key[c][(d + 4) % 5]);
    } else if (b == d) {
        printf("%c%c",
               key[(a + 4) % 5][b],
               key[(c + 4) % 5][d]);
    } else {
        printf("%c%c", key[a][d], key[c][b]);
    }
}

printf("\n");
return 0;
```

}

