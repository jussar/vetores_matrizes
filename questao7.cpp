#include <stdio.h>
#define TAM 4
 
int main() {
    int i, j, k, contIn=0, contOut=0, cont=0, contMaior=-1, cidadeMaior=-1;
    int L[TAM][TAM] = {1, 1, 1, 0,
                       0, 1, 1, 0,
                       1, 0, 1, 1,
                       0, 0, 1, 1};
 
    //A) Dado k, determinar quantas estradas saem e quantas chegam � cidade k.
    printf("Informe o numero da cidade (entre 0 e %d): ", TAM - 1);
    scanf("%d", &k);
    for (i = 0; i < TAM; i++) {
        if (k != i) { //desconsidera a pr�pria cidade
            if (L[i][k] == 1) { contIn++; }
            if (L[k][i] == 1) { contOut++; }
        }
    }
    printf("%d estradas saem e %d estradas chegam\n", contOut, contIn);
 
    //B) Dado k, verificar se todas as liga��es diretas entre a cidade k e outras s�o de m�o dupla.
    for (i = 0; i < TAM; i++) {
        if (k != i) { //desconsidera a pr�pria cidade
            if ((L[i][k] == 1) && (L[k][i] == 1)) {
                cont++;
            }
        }
    }
    printf("%d estradas de mao dupla\n", cont);
 
    //C) Relacionar as cidades que possuem sa�das diretas para a cidade k.
    printf("Saidas diretas para a cidade: ");
    for (i = 0; i < TAM; i++) {
        if (k != i) { //desconsidera a pr�pria cidade
            if (L[i][k] == 1) {
                printf("%i ", i);
            }
        }
    }
    printf("\n");
 
    //D) A qual das cidades chega o maior n�mero de estradas?
    for (i = 0; i < TAM; i++) {
        cont = 0;
        for (j = 0; j < TAM; j++) {
            if (L[j][i] == 1) {
                    cont++;
            }
        }
        if (cont > contMaior) {
            contMaior = cont;
            cidadeMaior = i;
        }
    }
    printf("Cidade com maior numero de estradas: %d (com %d estradas)\n", cidadeMaior, contMaior-1);
 
    return 0;
}
