#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <math.h>
int main()
{
    float numeroUno;
    float numeroDos;
    float suma,resta,producto,dividir,factorialUno,factorialDos;


    if(utn_getFlotante(&numeroUno, "Ingrese valor de A:\n", "Error en el ingreso\n", 3)==0);
        {
            printf("\n");
        }
    if(utn_getFlotante(&numeroDos, "Ingrese valor de B:\n", "Error en el ingreso\n", 3)==0);
        {
        printf("\n");
        }


    suma = utn_sumar(numeroUno, numeroDos);
    resta = utn_restar(numeroUno, numeroDos);
    producto = utn_multiplicar(numeroUno, numeroDos);
    factorialUno = utn_factorialUno(numeroUno);
    factorialDos = utn_factorialDos(numeroDos);

    if(numeroDos != 0)
        {
        dividir = utn_dividir(numeroUno, numeroDos);
        printf("\n La suma de %.2f y %.2f es: %.2f",numeroUno,numeroDos,suma);
        printf("\n La resta de %.2f y %.2f es: %.2f",numeroUno,numeroDos, resta);
        printf("\n La division de %.2f y %.2f es: %.2f",numeroUno,numeroDos,dividir);
        printf("\n El producto de %.2f y %.2f es: %.2f",numeroUno,numeroDos, producto);
        printf("\n El factorial de %.2f es: %.2f",numeroUno,factorialUno);
        printf("\n El factorial de %.2f es: %.2f",numeroDos,factorialDos);
        }
    else
        {
        printf("\n La suma de %.2f y %.2f es: %.2f",numeroUno,numeroDos,suma);
        printf("\n La resta de %.2f y %.2f es: %.2f",numeroUno,numeroDos, resta);
        printf("\n No es posible dividir por 0");
        printf("\n El producto de %.2f y %.2f es: %.2f",numeroUno,numeroDos, producto);
        printf("\n El factorial de %.2f es: %.2f",numeroUno,factorialUno);
        printf("\n El factorial de %.2f es: %.2f",numeroDos,factorialDos);
        }

    return 0;
}
