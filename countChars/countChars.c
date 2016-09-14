#include <stdio.h>

main() {
    long nc = 0;
    printf("EOF: %d\n", EOF);
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc); /* %ld corresponds to long int */
}

