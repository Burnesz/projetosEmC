#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void lerMatriz(int** matriz, int linhas, int colunas) {
    int i, j;
	for ( i = 0; i < linhas; i++) {
        for(j=0; j<colunas; j++){
            printf("[%d]x[%d]:", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void preencheSL(int **matriz, int *vetor,int linhas,int colunas){
    int i, j;
	for( i = 0; i< linhas; i++){
		vetor[i]=0;
        for( j = 0; j < colunas; j++){
            vetor[i]=vetor[i]+matriz[i][j];
        }
    }
}
void preencheSC(int **matriz, int *vetor,int linhas,int colunas){
    int i, j;
	for( i = 0; i< linhas; i++){
		vetor[i]=0;
        for( j = 0; j < colunas; j++){
            vetor[i]=vetor[i]+matriz[j][i];
        }
    }
}
void imprimirVetores (int **matriz,int *sl,int *sc, int linhas, int colunas){
    int i, j;
	for( i = 0; i< linhas; i++){
        printf("\n");
        for(j = 0; j< colunas; j++){
            printf("|%d|", matriz[i][j]);
        }
    }
    printf("\n---SL---");
    printf("\n");
    for( i = 0; i< linhas; i++){
        printf("|%d|", sl[i]);
	}
	printf("\n---SC---");
    printf("\n");
    for( i = 0; i< colunas; i++){
        printf("|%d|", sc[i]);
	}
}
int main()
{
    int **matriz, i, linhas, colunas, *SL, *SC;

    printf("Quantas linhas tera a matriz? ");
    scanf("%d", &linhas);

    printf("Quantas colunas tera a matriz? ");
    scanf("%d", &colunas);

    SL = (int*) malloc(linhas*sizeof(int));
    
    SC = (int*) malloc(colunas*sizeof(int));

    matriz = (int**) malloc(linhas*sizeof(int*));

    for(i=0; i<linhas; i++){
        matriz[i] = (int*) malloc(colunas*sizeof(int));
    }

    lerMatriz(matriz, linhas, colunas);
    
    preencheSL(matriz, SL, linhas, colunas);
    
    preencheSC(matriz, SC, linhas, colunas);

    imprimirVetores(matriz, SL, SC, linhas, colunas);


    for(i=0; i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);   

    return 0;
}
