#include <stdio.h>
# define val_vet 20


int main(void){
    int vet1[val_vet],vet2[val_vet],vet3[val_vet],i;
    for(i=0;i<val_vet;i++){ 
        printf("Entre com o %dº elemento do primeiro vetor: ",i+1);
        scanf("%d",&vet1[i]);
    }
    printf("\n");
    for(i=0;i<val_vet;i++){
        printf("Entre com o %dº elemento do segundo vetor: ",i+1);
        scanf("%d",&vet2[i]);
    }
   printf("\n\nResultado: ");
   printf (" vetor 3\n");
    for(i=0;i<val_vet;i++){
        vet3[i]=vet1[i]-vet2[i];
        printf("%d ",vet3[i]);
    }
    printf("\n\n");
    return 0;
}
