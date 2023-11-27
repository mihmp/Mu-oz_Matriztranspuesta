#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Se incluye las librerias necesarias para el prpograma*/

#define FILAS_MAX 10
#define COLUMNAS_MAX 10

void llenarMatriz(int matriz[FILAS_MAX][COLUMNAS_MAX], int filas, int columnas) {
    srand(time(NULL));
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Generar números aleatorios entre 0 y 100
        }
    }
}
/*Defino primeras filas y columnas e ingreso las primeras lineas de código*/