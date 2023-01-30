#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    char c;
    char *s[10];
    s[0]="ab";
    int i=0;
    f=fopen("10.input","rt");
    while((c=fgetc(f))!=EOF){
        //s[i]="a";
        i++;
    }
    printf("%d", s[0]);
    fclose(f);
    return 0;
}
