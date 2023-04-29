#include<stdio.h>
/*Escribir el código de la función que imprima por pantalla todos los divisores comunes de
dos números que recibe como argumento.*/

int a,b;
void divisores(int a,int b);
int main()
{
 printf("ponga 2 numeros naturales\n");
 scanf("%i",&a);
 scanf("%i",&b);
 printf("los divisores comunes son:");
 divisores(a, b);
    return 0;
}
void divisores(int a,int b){

    int d;
    if(a<b){d=b;}else{d=a;}
    for(int i=1;i<=d;i++){
if((a%i==0)&&(b%i==0))
printf(" %i,",i);
    }
}
