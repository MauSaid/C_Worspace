#include<stdio.h>

static int i;
static int i = 10;
static int i;

int a=100;
int a; 
// esto se permite por que las variables inicializadas se almacen en un segmento de memoria y las no incializadas en otro segmento pero cuando haces
// una doble inicializacion hay conflicto en la redifinicion por que se estan guardando en el mismo segmento. 
int main(){
int a = 10; // aqui si se puede redifinir ya que esta variable es local a una funcion en este caso main, solo tiene visibilidad dentro de main 
// y se almacena temporal en el stack
    printf("i: %d\n",i);
    printf("i: %d\n",a);

    return 0;
}