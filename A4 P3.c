#include <stdio.h>

void main(void)
{
    int a, b, c;

    printf("Escolha dois numeros:\n");
    scanf("%d %d", &a, &b);

    if (a!=b){

        if (a>b)
            printf("%d eh maior que %d", a, b);

        else
            printf("%d eh maior que %d", b, a);

    }
    if (a==b){
        printf("%d eh igual a %d", a, b);
    }

}
