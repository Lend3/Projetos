#include <stdio.h>

/*
	By: Thiago Laitz & Marcos Antônio Nunes de Moura.
*/

int main(){

	int n=51,aux,value;
	int array[50];

    while(n > 50){
	printf("Digite o numero n, de 1 até 50: "); // Aqui eu pego o valor "n".
	scanf("%d",&n);
    }

	for (int i=0; i<n; i++){
		printf("Escreva os numeros (%d/%d): ",(i+1),n); //Salva os numeros num array.
		scanf("%d", &aux);
		array[i]=aux;
	}
	for (int d=0; d< n; d++){
		aux = array[d];
		for(int k=(d+1); k<n; k++){
			if(aux > array[k]){ //Ao trocar o sinal ">" para "<", você transforma o programa numa sequencia decrescente.
				value = aux;
				aux = array[k]; //Troca de valores.Começando de um valor fixo.
				array[k]= value;
		array[d] = aux;
			}
		}
	}
	printf("números ordenados: ");
	for(int f=0; f<n-1;f++ ){
		printf("%d, ", array[f]); //Imprime o resultado final ordenado.
	}
	printf("%d\n",array[n-1]);
	return 0;
}
