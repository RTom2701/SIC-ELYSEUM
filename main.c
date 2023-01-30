#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    char c;

    int i=0;
    f=fopen("10.input","rt");
    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }

    fclose(f);
    return 0;
}

