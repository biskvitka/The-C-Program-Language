#include <stdio.h>

main(){
    int c;
    putchar(EOF);
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
