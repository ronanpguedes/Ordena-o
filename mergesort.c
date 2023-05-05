#include <stdio.h>
/*v= vetor, s inicio ,e fim, m meio , k copiando*/
void merge (int vetor[], int inicio,int meio, int fim){
        /* temporario e para pegar o vetor na pocisao 0 somar mais ultima pocição e escrementar mais 1*/
    int temp[fim - inicio +1];
    int i = inicio, j = meio + 1, copiando = 0;
    while(i <= meio && j <= fim){

if (vetor[i] <= vetor[j]) { // Esquerda é menor
            temp[copiando++] = vetor[i++];
        } else { // Direita é menor
            temp[copiando++] = vetor[j++];
        }
    }
    while (i <= meio) {
        temp[copiando++] = vetor[i++];
    }
    while (j <= fim) {
        temp[copiando++] = vetor[j++];
    }
    for (i = inicio, copiando = 0; i <= fim; i++, copiando++) {
        vetor[i] = temp[copiando];
    }
}
/*v= vetor, s inicio ,e fim, m meio , k copiando*/
void mergeSort(int vetor[], int inicio, int fim){
    /*execução de comparação do vetor para saber se ele e iqual */
    if(inicio < fim){
            /*execução do fetor sera feira na linha if que mostra a divisao do vetor*/
        int meio = (inicio + fim) /2;
        /**/
        mergeSort(vetor, inicio, fim);
        /*mergeSort */
        mergeSort(vetor, meio + 1, fim);
        /*enviar as variaveis para merge para fazer divisoes e junçoes do codigo*/
        merge(vetor, inicio, meio, fim);

    }
}
/*v= vetor, s inicio ,e fim, m meio , k copiando*/
void imprime(int vetor[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main(){
int vetor[] = { 4, 5, 3, 8, 7, 1, 2, 6 };
    imprime(vetor, 8);
    mergeSort(vetor, 0, 7);
    imprime(vetor, 8);

return 0;
}
