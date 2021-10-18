#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int nbreMat;//nombre de matrices
    int** data;//données des matrices
} MatrixArray;

typedef struct {
    int nbreLig; //nombre de lignes
    int nbreCol; //nombre de colonnes
    int** data;//données des matrices
} Matrix;

Matrix* creer_matrix(int nbre_lig, int nbre_col) {
    //crée une matrice à partir du nombre de lignes et colonnes en supposant
    //qu'on a obtenu la taille de la matrice.
    //Utile pour la question 2
    
    Matrix* matrix = malloc(sizeof(Matrix));
    matrix->nbreLig = nbre_lig;
    matrix->nbreCol = nbre_col;
    int** data = malloc(sizeof(int*) * nbre_lig); 
    for(int i = 0; i < nbre_lig; i++){
        data[i] = calloc(nbre_col, sizeof(int));
    }
    matrix->data = data;
    return matrix;
}

void print_matrix(Matrix* matrix) {
    //affiche une matrice dans le même format que le fichier d'entrée en utilisant printf.
    //Utile pour la question 3
    
    for(int i = 0; i < matrix->nbreLig; i++) {
        printf("%s", "\n");
        for(int j = 0; j < matrix->nbreCol; j++) {
            printf("%f\t", matrix->data[i][j]);
        }
    }
}

int main()
{
    return 0;
}