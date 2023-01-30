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

 https://code-with-me.global.jetbrains.com/BFsbpflJtl1r_GksJIcxFg#p=CL&fp=C4AC16BDC21079F997B675F3FA6B39EF96E019934F030E76FF995205300616D7

 */
