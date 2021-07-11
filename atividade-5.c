#include <stdio.h>
#define tamanhoVetor 4

int *lerVetores(int vetor1[], int vetor2[]){
    for(int i=0 ; i<4 ; i++){
        printf("Informe o valor do primero  vetor: \n");
        scanf("%d", &vetor1[i]);
    }

    printf("\n\n");
    for(int i=0 ; i<4 ; i++){
        printf("Informe o valor do segundo vetor: \n");
        scanf("%d", &vetor2[i]);
    }
    return vetor2, vetor1;
}
int *intercalarValoresVetores(int vetor3[], int vetor1[], int vetor2[]){
    for (int i = 0; i < 4; i++) {
        vetor3[i*2] = vetor1[i];
        for (int i = 0; i < 4; i++) {
            vetor3[i*2+1] = vetor2[i];
        }
    }
    return vetor3;
}
int  imprimirTerceiroVetor(int vetor3[]){
    printf("\n");
    printf("---- Terceiro Vetor ---- \n");
    for (int i = 0; i <tamanhoVetor*2; i++) {
        printf("%d ", vetor3[i]);
    }
    return 0;
}
int main(){
    int vetor1[tamanhoVetor], vetor2[tamanhoVetor], vetor3[tamanhoVetor*2];

    lerVetores(vetor1, vetor2);
    intercalarValoresVetores(vetor3, vetor1, vetor2);
    imprimirTerceiroVetor(vetor3);
}
