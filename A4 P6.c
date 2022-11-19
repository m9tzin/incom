#include <stdio.h>

void main(void)
{
    float sexo, M, F, peso_homem, peso_mulher, h;

    printf("Qual o seu sexo? M ou F?\n");
    scanf("%f", &sexo);

    printf("Qual a sua altura? Em cm.\n");
    scanf("%f", &h);

        if (sexo=M)
        {
            peso_homem=((72.7*h)-58);
            printf("O seu peso ideal eh: %.2f", &peso_homem);
        }
        if (sexo=F)
        {

            peso_mulher=((62.1*h)-44.7);
            printf("O seu peso ideal eh: %.2f", &peso_mulher);
        }


}

