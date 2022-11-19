#include <stdio.h>
#include <math.h>

void main(void)
{
    double base_maior, base_menor, area, altura;

    printf("Vamos calcular a area de um trapezio.\n\n");

    printf("Insira o valor da base menor:\n");
    scanf("%lf", &base_menor);

    printf("Insira o valor da base maior:\n");
    scanf("%lf", &base_maior);

    printf("Insira o valor da altura:\n");
    scanf("%lf", &altura);

    area=((base_maior+base_menor)*altura)/2;

    printf("A area do trapezio eh: %.2lf u.a", area);



}
