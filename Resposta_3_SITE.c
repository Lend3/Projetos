// By: Regis Rodman
#include <stdio.h>

void show( char *s );       // Protótipo da função show( char *s )
int Dec( char ch );         // Protótipo da função Dec( char ch ); Obs: Dec = Decimal

int main()
{
    char str[200];
    char * pv = &str[0];     // Ponteiro para o primeiro elemento de str[200]

    printf( "Entre com letras, x para encerrar\n" );
    while( 1 )
    {
        *pv = getchar();
        if( *pv == 'x' ) {
            show( str );
            break;
        } else {
            pv++;
        }
    }

return 0;
}

// Corpo da função show( char *s )
void show( char *s )
{
    for( int u=0; s[u]!='\0'; u++ )
    {
        // Só "letras" maiúsculas ou minúsculas
        if( ( Dec(s[u]) >= 65 && Dec(s[u]) <= 90) || (Dec(s[u]) >= 97 && Dec(s[u]) <= 122) )
            printf( "%c ", s[u] == 'x' ? ' ' : s[u] );
    }
putchar( '\n' );
}

// Corpo da função Dec( char ch )
int Dec( char ch )
{
    // Retorna o valor decimal do caracter. Tabela ASCII.
    return "%d", ch;
}
