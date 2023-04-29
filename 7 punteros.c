#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
     void rellenaArreglo(int *a, int n, int rango). La función deberá inicializar los n
      elementos referidos por a con números aleatorios definidos entre 0 y rango -1.
 9.void inicializaArreglo(int *a, int n, int valor). La función deberá
       inicializar los n elementos referidos por a, con el valor valor.
10.  void imprimeArreglo(const int *a, int n, int c). La función deberá
       imprimir en la salida estándar, los n elementos referidos por a, con c elementos
       por renglón.
11. Escriba un programa que permita realizar la suma de dos vectores dinámicos. El
       tamaño se le pide al usuario y los mismos se inicializan con valores */
void rellenaArreglo(int *a, int n, int rango);
void inicializaArreglo(int *a, int n, int valor);
void imprimeArreglo(const int *a, int n, int c);
int valor_randun(int ini, int fin);
int largo,*puntero,aux,valor;
/* ***************************************************************************************
*                                                                                        *
*                                                                                        *
*          A TODOS LOS METODOS SIGUIENTES LA FALTAN LA VERIFICACION DE ERRORES           *
*                                                                                        *
*                                                                                        *
******************************************************************************************
*/
int main()
{
   printf("Introduce el largo del areglo para crearlo\n");
       scanf("%d", &largo);
   int arreglo[largo];
puntero=arreglo;


  printf("Introduce el rango del areglo para rellenarlo\n");
       scanf("%d", &aux);
rellenaArreglo(puntero,largo,aux);
for (int i = 0; i < aux; i++)
{
   printf("%d,",*(puntero+i));
}
/*primera pregunta lista */
 printf("Introduce con que quieres inicializar el arreglo\n");
       scanf("%d", &valor);
inicializaArreglo(puntero,largo,valor);
for (int i = 0; i < aux; i++)
{
   printf("%d,",*(puntero+i));
}
/*segunda pregunta lista */
const int *b=puntero;
imprimeArreglo(b,largo,5);



   return 0;
}

void rellenaArreglo(int *a, int n, int rango)
{

   for (int i = 0; i < n; i++)
   {
      *(a + i )= valor_randun(0, rango - 1);
   }
}
int valor_randun(int ini, int fin)
{
   int aux = ini - fin;
   int aux2=rand();
   int result = aux2 % (aux + 1) + ini;
/*printf("%d, el randun\n",aux2);
printf("%d,el randun ya dividido\n",aux2 % (aux + 1));
printf("%d,lo q guardo en el arrreglo\n",(aux2 % (aux + 1) + ini));*/

   return result;
}
void inicializaArreglo(int *a, int n, int valor){

    for (int i = 0; i < n; i++)
   {
      *(a + i )= valor;
   }
}
void imprimeArreglo(const int *a, int n, int c){ 
int largo=n;
printf("\n");
while (largo>0)
{
 for (int i=0;i<c&(largo-n-1)!=0;i++){
   printf("%d,",*(a+(largo-n)));
   
   largo--;
 }
 printf("\n");

}



}