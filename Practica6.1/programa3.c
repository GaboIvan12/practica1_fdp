/*
* Este programa ejemplifica la creacion de variables de tipo:asm
* Entero (short,int, long)
* Real (float, double, long double)
* Caracter (char)
* Lóligo (bool)
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    //Tipo Lista_de_variable;
    short a, b;
    unsigned short c, d;
    int e= 12;
    long f= -3;

    a= 225;
    c= 128;
    printf("%d %u\n", a, c);
    printf("%d %d\n", e, f);

    // Variables rales
    float g;
    double h;

    g= 1.2;
    printf("%.2f\n",g);
    g=1.2e-5;
    printf("%.1e\n",g);
    printf("%g\n",g);

    //Variables de caracter
    char j,k,l,m;
    j= 'a';
    k= '\n';//Salto de línea
    l= '\t';// tabulador
    char str[] ="¡Hola mundo!";

    printf("%c %c %c\n", j,k , l);
    printf("%s\n",str);
    return 0; 
}
