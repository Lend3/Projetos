#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fim[5];
    int limite;
    int x, y, z;

    system("cls");

    for(z=1;z<=10;z++)
    {
    printf("Digite o limite do gerador : ");
    scanf("%d", &limite);
    if (limite >= 2)
        printf("2\n");
    for (x=1; x<=limite; x++)
        for (y=2; y<x; y++)
            if (x%y == 0)
                y = x+1;
            else if (y == x-1)
            {
                printf("%d\n", x);
                y = x+1;
            }

    z=z-1;
    }
    return 0;
}
