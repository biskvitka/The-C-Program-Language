#include <stdio.h>

main(){
    int c;

    while ((c = getchar()) != EOF) {
        if ( c == '\t') {
            while ( (c = getchar()) == '\t'){
               ;
            }
            c = ' ';
        }
        putchar(c);
    }
}


