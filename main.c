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


/*

 int *tab[100000];
 for (int i=0; i<10000;i++) tab[i]=calloc(n, sizeof(int));

 https://code-with-me.global.jetbrains.com/bhs4lEBEK_biGP4eK38mKQ#p=CL&fp=7C3726F1970C7FE5A46AC19906EC1E4C845E2FBA5EBF4B70396F4054757064C2

 */
