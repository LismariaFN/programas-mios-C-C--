#include <stdio.h>
/*Realizar un programa que pida las notas de 20 alumnos por pantalla y muestre
un menú de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el mayor.*/
double l=20;
double a[20];

double b;
int c;
double media(double a[]);
double menor(double a[]);
void lista(double a[]);
double mayor(double a[]);

int main()

{
    printf("Introdusca 20 notas\n");

    for (int i = 0; i < l; i++)
    {
        scanf("%d", &b);
        a[i] = b;
    }
    printf("Elija la acion a realizar:\n 1. Listar notas\n 2.Calcular la media\n 3.Calcular el menor\n 4.Calcular el mayor");
    scanf("%d", &c);
    switch (c)
    { case 1:
        printf("La lista es:%d");
        lista(a);
        break;
    case 2:
        printf("La media es:%d", media(a));
        break;
    case 3:
        printf(" El menores:%d", menor(a));
        break;
   
    case 4:
        printf("El Mayor es:%d", mayor(a));
        break;

    default:
        printf("Iindice invalido");
        break;
    }

    return 0;
}
double media(double a[])
{
    double suma = 0;
    for (int i = 0; i < l; i++)
    {
        suma += a[i];
    }
    return suma / l;
}
double menor(double a[])
{

    double meno = a[0];
    for (int i = 0; i < l; i++)
    {
        if (a[i] < meno)
        {
            meno = a[i];
        }
    }
    return meno;
}

double mayor(double a[])
{

    double mayo = a[0];
    for (int i = 0; i < l; i++)
    {
        if (a[i] > mayo)
        {
            mayo = a[i];
        }
    }
    return mayo;
}
void lista(double a[])
{

    for (int i = 0; i < l; i++){
        printf(" %d,",a[i]);
    }
    

}