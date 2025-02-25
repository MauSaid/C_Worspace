// Las constantes siempre deben ir en mayúsculas cuando se definen como macros

#include<stdio.h>
#define PI 3.1416
// Se agregaron paréntesis para evitar errores de precedencia
#define ADD(x,y) ((x) + (y))
// Se usa la macro en múltiples líneas con '\'
#define GREATER(x,y) do { \
                            if(x > y) \
                                printf("%d is greater than %d \n", (x), (y)); \
                            else \
                                printf("%d is lesser than %d \n", (x), (y)); \
                        } while (0)


int flag = 10;
int flag2;
int main()
{
    const int number = 10; // Cuando usamos la keyword const la variable solo esta en modo lectura y no puede ser modificada. 
    // number = 20;  hacer esto nos daria un error en tiempo de copilacion
    printf("The number is equal to: %d\n", number);
    printf("La suma de 10 + 5 es igual a: %d\n", ADD(10,5));
    printf("The value of Pi is: %.4f\n", PI);
    GREATER(10,1);
    // Exiten otras macros ya predefinidas de la libreria standar como: __DATE__ and __TIME__
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}