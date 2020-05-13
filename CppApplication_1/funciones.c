/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "funciones.h"

int palindrome(char string[MAX_LETTERS],int cant)
{
    char *p1=&string[0];
    char *p2=&string[cant];
    
    if (p2<=p1)
    {
        if((*p2)==(*p1))
        {
            
            return OK;
        }
        else
        {
            
            return FAIL;
        }
    }
    else
    {
        if((*p2)==(*p1))
        {
            return OK+palindrome((string+1),(cant-2));
        }
        else
        {
            return FAIL;
        }
    }
}

char * input (void)
{

	int c=0;						//Caracter
	int sstr=0;						//Comienzo de posicion de puntero en el string
	static char input_str[MAX_LETTERS]={0};			//String de entrada
	char *str=0;					//Puntero a primer posicion de string de entrada

	str=&input_str[0];				//Dispongo el puntero a la primer posicion del arreglo input_str

	while((c=getchar())!='\n')
        {		//Cargo el caracter de entrada a la variable c	

		if(((c>=48)&&(c<=57))||((c>=65)&&(c<=90))||((c>=97)&&(c<=122)))
                {	//Restrinjo valores ASCII para que solo lea como entrada 
																			//		valida MAYUSCULAS, NUMEROS Y MINUSCULAS
			str = &input_str[sstr++];	//Dispongo el puntero a la primer posicion del arreglo input_str,esta vez, con posicion pos incrementada
										//para que luego guarde la siguiente letra en la proxima posicion del arreglo
			*str= c;					//Guardo el valor en la posicion actual
		}

	}

	return input_str;

}
