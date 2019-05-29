	#include <stdio.h>
	#include <conio.h>
	
	char mat[3][3];
	
	void tabuleiro(){
		int i=0;
		int linha;
		int coluna;
		int l;
		int c;
		while(i<=9){
			printf("\njogador 1 digite a linha: ");
			scanf("%d",&linha);
			printf("jogador 1 digite a coluna: ");
			scanf("%d",&coluna);
			printf("\n\n");
			for(l=1;l<=3;l++){
				printf("\n");
				for(c=1;c<=3;c++){
					if((c==coluna)and(l==linha)){
						mat[l][c]= 'X';
					}
					printf("| %c |",mat[l][c]);
				}
			}
			i++;
			if(i==9){
				break;
			}	
		    printf("\n\n\n");
		    printf("\njogador 2 digite a linha: ");
			scanf("%d",&linha);
			printf("jogador 2 digite a coluna: ");
			scanf("%d",&coluna);
			
			printf("\n\n");
			for(l=1;l<=3;l++){
				printf("\n");
				for(c=1;c<=3;c++){
					if((c==coluna)and(l==linha)){
						mat[l][c]= '0';
					}
					printf("| %c |",mat[l][c]);
				}
			}
			i++;
			if(i==9){
				break;
			}
	    }
	}
	main(){
		tabuleiro();
	}
