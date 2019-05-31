#include <stdio.h>
#include <conio.h>

int m,n;
	void calcular(int vetor[],int tamanho)
	{
		int i;
		for(i=0;i<tamanho;i++){
			printf("digite um numero: ");
			scanf("%d",&vetor[i]);
		}
	}
	void imprime(int vet[]){
		int j,i;

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d\t", vet[i * n + j]);
		printf("\n");
	}
	}
	void busca(int vet[],int numero){
		int i,j;
		int cont=0;
		
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++){
			if(vet[i * n + j]==numero){
				printf("[%d][%d]=%d\n",i,j,numero);
				cont++;
			}
		}
		    		
		printf("\n");
	}	
		
	if(cont<1){
		printf("o numero nao existe na matriz");
	}
	}
	int main()
	{  
	    int tam;
	    printf("digite o valor da linha da matriz:  ");
	    scanf("%d",&m);
	    printf("digite o valor da coluna da matriz :  ");
	    scanf("%d",&n);
	    printf("\n\n");
	    tam = m * n;
	    int vet[tam];
	    calcular(vet,tam);
	    imprime(vet);
	    printf("busque algum numero: ");
	    int num;
	    scanf("%d",&num);
	    busca(vet,num);
	}
