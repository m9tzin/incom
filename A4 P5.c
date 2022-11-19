#include <stdio.h>

void main(void)
{
    int a, b, c;

    printf("Insira um numero: ");
    scanf("%d", &a);

    printf("Insira um numero: ");
    scanf("%d", &b);

    c=a%b;

    if(a!=b && a>b && b>a){
        if (c!=0){
            printf("Os numeros nao sao divisiveis entre si.");
        }
        else{
            printf("Os numeros sao divisiveis entre si.");
            }
    }

    else
        printf("Os numeros sao divisiveis entre si.");
    }


