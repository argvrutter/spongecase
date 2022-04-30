#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "ctype.h"
/**
 * spongecase - It CONVerTs STDIN to meME texT liKE tHis
 */

int main(int argc, char** argv)
{
    // read in tokens of text from stdin
    char c;
    srand(time(NULL));
    while(1)
    {
        c=getc(stdin);
        if (c==EOF) break;
        putc((rand()%2) ? tolower(c) : toupper(c), stdout);
    }
    return 0;
}