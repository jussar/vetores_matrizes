#include <stdio.h>
#include <conio.h>
int mata[3][2];
int matb[2][3];
int matc[3][3];

void produto(){
	int l,c;
	printf("mat A\n");
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			printf("digite um numero:");
			scanf("%d",&mata[l][c]);
		}
	}
	printf("mat B\n");
	for(l=0;l<2;l++){
		for(c=0;c<3;c++){
			printf("digite um numero:");
			scanf("%d",&matb[l][c]);
		}
	}
	printf("\n\n====================mat a =========================\n");
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<2;c++){
			printf("%d ",mata[l][c]);
		}
	}
	printf("\n\n====================mat b =========================\n");
	for(l=0;l<2;l++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("%d ",matb[l][c]);
		}
	}
	
	
	
	int produto=0;
	int i;
	printf("\n\n\n===============produto mat a X mat b=======================\n");
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			for(int i=0;i<2;i++){
				produto = produto + mata[l][i] * matb[i][c];
			}
		matc[l][c] = produto;
		produto =0;
		}
	}
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("%d ",matc[l][c]);
		}
	}
}

main() {
	produto();
}
