#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel, far;

    printf("Insira o valor a ser convertido:\n\n");
    scanf("%f",&cel);

    far= cel*1.8+32;

    system("cls");

    printf("A temperatura convertida para fahrenheit eh: %f\n\n", far);


    system("pause");


}
