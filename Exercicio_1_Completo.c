//By: Regis Rodman
#include <stdio.h>

// Prot�tipo da fun��o soma
int soma( int x, int y );

int main()
{
    int x, y;

    printf( "Entre com dois n�meros inteiros: " ); scanf( "%d %d", &x, &y );
    printf( "Soma = %d\n", soma( x, y ) );
    printf( "O maior valor digitado foi: %d\n", x>y ? x:y );

return 0;
}

// Corpo da fun��o soma
int soma( int x, int y )
{
    return x+y;
}
