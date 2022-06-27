#include <stdio.h>
#include <stdlib.h>

char invertirCadena(char cadena[]);

int main()
{

    char cadena[10] = "hola";
    invertirCadena(cadena);
    printf("%s",cadena);

	return 0;
}



char invertirCadena(char cadena[])
{
    int longitud = strlen(cadena);
    char aux;
    for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
        izquierda++, derecha--) {
        aux = cadena[izquierda];
        cadena[izquierda] = cadena[derecha];
        cadena[derecha] = aux;
    }
  return cadena;
}






