// Copys whatever text inputed and outputs the same by Viper

#include <stdio.h>

int main ()
{

    int c;

    c = getchar();
    while (c != EOF) {
        putchar (c);
        c = getchar();
    }
return 0;
}