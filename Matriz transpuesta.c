#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Se añade estas librerias para poder obtener numero aleatorios
int main(){
int filas, columnas;
srand (time(NULL));-
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    //Pido al usuario que elija el tamaño de la matriz
    printf("Matriz:\n");
    int matriz[filas][columnas];
    int transpuesta[columnas][filas];
    // Incluyo mis dos vectores
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j]=rand()%100 + 1;
            printf("%d\t", matriz[i][j]);
        }
          printf("\n");
          // Mediante dos bucles for, puedo ir por las filas y columnas,dandole valores aleatorios mediante la funcion rand
    }
    printf ("Transpuesta:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            transpuesta[i][j]=matriz[j][i];
            //Mediante otro bucle for, coloco los valores transpuestos a mi matriz transpuesta, excepto la diagonal principal ya que esta no se ve afectada
            printf("%d\t", transpuesta[i][j]);
        }
          printf("\n");
    }


}