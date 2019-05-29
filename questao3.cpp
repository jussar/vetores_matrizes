#include <stdio.h>
#include <conio.h>

int veta[6];
int vetb[6];
int vetc[6];

void ler_vetor(int vet[6]){
	int i;
	for(i=0;i<6;i++){
		printf("digite o %d numero: ",i);
		scanf("%d",&vet[i]);
	}
}
void intersect(int vet1[6], int vet2[6], int vet3[6]){
	int i;
	for(i=0;i<6;i++){
		if(vet1[i] == vet2[i]){
			vet3[i] = vet1[i];
		}else
		vet3[i] = -1;
	}
}
void imprimir(int vet[6]){
	int i;
	for(i=0;i<6;i++){
		printf("%d ",vet[i]);
	}
}
main(){
	printf("vetor A\n");
	ler_vetor(&veta[6]);
	printf("\nvetor B\n");
	ler_vetor(&vetb[6]);
	intersect(&veta[6],&vetb[6],&vetc[6]);
	printf("\nresultado\n");
	imprimir(&vetc[6]);
}
