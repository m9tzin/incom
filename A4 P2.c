#include <stdio.h>

void main(void)
{
    double renda, saude, educacao, alimentacao, vestuario, lazer, outros;

    printf("Qual a renda mensal a ser distribuida?\n");
    scanf("%lf", &renda);

    saude=renda*0.1;
    educacao=renda*0.25;
    alimentacao=renda*0.3;
    vestuario=renda*0.1;
    lazer=renda*0.05;
    outros=renda*0.2;

    printf("Saude = %.2lf reais\n", saude);
    printf("Educacao = %.2lf reais\n", educacao);
    printf("Alimentacao = %.2lf reais\n", alimentacao);
    printf("Vestuario = %.2lf reais\n", vestuario);
    printf("Lazer = %.2lf reais\n", lazer);
    printf("Outros = %.2lf reais", outros);


}
