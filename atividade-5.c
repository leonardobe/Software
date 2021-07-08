#include <stdio.h>
#define tam 4

int *leVetor(int vet[], int vet2[]){
    for(int i=0 ; i<4 ; i++){
        printf("Informe o valor do primero  vetor: \n");
        scanf("%d", &vet[i]);
    }

    printf("\n\n");
    for(int i=0 ; i<4 ; i++){
        printf("Informe o valor do segundo vetor: \n");
        scanf("%d", &vet2[i]);
    }
    return vet2, vet;
}
int *intercala(int vet3[], int vet[], int vet2[]){
    for (int i = 0; i < 4; i++) {
        vet3[i*2] = vet[i];
        for (int i = 0; i < 4; i++) {
            vet3[i*2+1] = vet2[i];
        }
    }
    return vet3;
}
int  imprimeIntercalado(int vet3[]){
    printf("\n");
    printf("---- Terceiro Vetor ---- \n");
    for (int i = 0; i < tam*2; i++) {
        printf("%d ", vet3[i]);
    }
    return 0;
}
int main(){
    int vet[tam], vet2[tam], vet3[tam*2];

    leVetor(vet, vet2);
    intercala(vet3, vet, vet2);
    imprimeIntercalado(vet3);
}
