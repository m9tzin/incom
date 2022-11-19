#include <stdio.h>

void main(void)
{
    int a, b, c;

    printf("Insira um numero: ");
    scanf("%d", &a);

    b=a%2;

    if (b!=1){
        printf("O numero %d eh par.", a);
    }
    else {
        printf("O numero %d eh impar.", a);
    }
}
