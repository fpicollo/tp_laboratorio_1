#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <math.h>

static void myFpurge()
{
    //__fpurge(stdin);
    fflush(stdin);
}


static int getFloat(float* numeroIngresado)
{
    myFpurge();
    return scanf("%f", numeroIngresado);
}

/**
* \brief Solicita dos flotante al usuario y devuelve la suma de esos dos flotantes.
* \param numeroUno para tomar el el primer valor de la suma.
* \param numeroDos para tomar el esgundo valor de la suma.
* \return Devuelve la suma de los dos flotantes.
*
*/
float utn_sumar(float numeroUno, float numeroDos)
{
    float suma ;
    suma = numeroUno + numeroDos;
    return suma;
}
/**
* \brief Solicita dos flotante al usuario y devuelve la resta de esos dos flotantes.
* \param numeroUno para tomar el el primer valor de la resta.
* \param numeroDos para tomar el esgundo valor de la resta.
* \return Devuelve la resta de los dos flotantes.
*
*/
float utn_restar(float numeroUno, float numeroDos)
{
    float resta ;
    resta = numeroUno - numeroDos;
    return resta;
}
/**
* \brief Solicita dos flotante al usuario y devuelve la division de esos dos flotantes, exepto que el segundo flotante sea 0.
* \param numeroUno para tomar el el primer valor de la division.
* \param numeroDos para tomar el esgundo valor de la division.
* \return Devuelve la division de los dos flotantes, a exepcion de que el segundo flotante sea 0.Si no devuelve mensaje de error.
*
*/
float utn_dividir(float numeroUno, float numeroDos)
{
    float division;
    if (numeroDos != 0)
    {
        division = numeroUno / numeroDos;
        return division;
    }
    else
    {
        division = 0;
        return division;
    }
}
/**
* \brief Solicita dos flotante al usuario y devuelve la multiplicacion de esos dos flotantes.
* \param numeroUno para tomar el el primer valor de la multiplicacion.
* \param numeroDos para tomar el esgundo valor de la multiplicacion.
* \return Devuelve la multiplicacion de los dos flotantes.
*
*/
float utn_multiplicar(float numeroUno, float numeroDos)
{
    float producto;
    producto = numeroUno * numeroDos;
    return producto;
}
/**
* \brief Solicita un flotante al usuario y lo devuelve a traves de resultado.
* \param numeroUno para tomar el valor para la factorizacion.
* \return Devuelve la factorizacion del numero.
*
*/
float utn_factorialUno(float numeroUno)
{
    float resultado;
    if(numeroUno==1){
        return(1);
}
    resultado=numeroUno*utn_factorialUno(numeroUno-1);
    return(resultado);
}
/**
* \brief Solicita un flotante al usuario y lo devuelve a traves de resultado.
* \param numeroDps0 para tomar el valor para la factorizacion.
* \return Devuelve la factorizacion del numero.
*
*/
float utn_factorialDos(float numeroDos)
{
    float resultado;
    if(numeroDos==1){
        return(1);
}
    resultado=numeroDos*utn_factorialDos(numeroDos-1);
    return(resultado);
}


/**
* \brief Solicita un flotante al usuario y lo devuelve a traves de pResultado si es validado
* \param pResultado Puntero a la variable resultado
* \param mensaje Es el mensaje a ser mostrado
* \param mensajeError Es el mensaje que se muestra en caso de error
* \param reintentos Es la cantidad de intentos que tiene el usuario para ingresar un flotante
* \return En caso de exito retorna 0, si no es un flotante retorna 1
*
*/
int utn_getFlotante(float *pResultado,
                    char mensaje[],
                    char mensajeError[],
                    int reintentos)
{
    int retorno;
    int cantidadDeIntentos = 0;
    float numeroIngresado;
    do
    {
        printf("%s", mensaje);
        if(getFloat(&numeroIngresado) == 1)
        {
            *pResultado = numeroIngresado;
            retorno = 0;
            break;
        }
        else
        {
            printf("%s", mensajeError);
            retorno = 1;
        }
        cantidadDeIntentos++;
    }while(cantidadDeIntentos<reintentos);
    return retorno;
}




