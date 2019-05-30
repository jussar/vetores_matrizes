#include <stdio.h>
#include <conio.h>

char mat[3][3] = {' ',' ',' ',' ',' ',' '};
int linha,coluna,l,c;
int totaljogadas=0;

void validajogada(){
	do{
		printf("digite uma linha: ");
		scanf("%d",&linha);
	}while((linha<1)or(linha>3));
	do{
		printf("digite uma coluna: ");
		scanf("%d",&coluna);
	}while((coluna<1)or(coluna>3));
}

int validaposicao(){
	while((mat[linha][coluna]=='X')||(mat[linha][coluna]=='0')){
	    printf("\nxxxx POSICAO INVALIDA xxxx\n");
		validajogada();	
	}
	return 1;
}

void tabuleiro(){
	
	printf("==========JOGO DA VELHA==========\n\n");
	for(l=1;l<=3;l++){
		printf("\n");
		for(c=1;c<=3;c++){
			printf("| %c |",mat[l][c]);
		}
	}
	
	do{
		printf("\n\n---JOGADOR 1---\n");
		validajogada();
		validaposicao();
		if(validaposicao()==1){
			mat[linha][coluna] = 'X';
		}
		printf("\n\n");
		for(l=1;l<=3;l++){
		printf("\n");
		for(c=1;c<=3;c++){
			printf("| %c |",mat[l][c]);
		}
		
	}
	totaljogadas++;
	if(totaljogadas==9){
		break;
	}
	printf("\n\n\n");
	
	printf("\n\n---JOGADOR 2---\n");
		validajogada();
		validaposicao();
		if(validaposicao()==1){
			mat[linha][coluna] = '0';
		}
		printf("\n\n");
		for(l=1;l<=3;l++){
		printf("\n");
		for(c=1;c<=3;c++){
			printf("| %c |",mat[l][c]);
		}
		
	}	
	totaljogadas++;	
	}while(totaljogadas<=9);
}
main(){
	tabuleiro();
}
