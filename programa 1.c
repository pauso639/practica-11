/*Sofía Paulina López González
practica 11 -imprimir inverso*/

#include <stdio.h>
#include <string.h>


void imprimir(char[]);

int main ()
{
    char nombre[] = "Facultad de Ingenieria";
    imprimir(nombre);
}

void imprimir(char s[])
{
    int tam;
    for ( tam=strlen(s)-1 ; tam>=0 ; tam--)
        printf("%c", s[tam]);
    printf("\n");
}
