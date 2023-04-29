#include<stdio.h>
#include<stdbool.h>
/*Escribir un programa que lea tres números enteros y emita un mensaje que indique
si están o no en orden numérico. Usar una función que dados dos valores retorne
true si el primero es mayor que el segundo y false en caso cont*/
int a;
int b;
int c;
bool f;
bool orden(int a,int b,int c);
int main()
{
printf("ponga 3 numeros:\n");
scanf(" %i ",&a);
scanf("%i",&b);
scanf("%i",&c);
f=orden(a,b,c);
printf("¿estan en orden?:");
if(f){
    printf("si estta ordenado");
}else{ printf("no esta ordenado");
}
    return 0;
}
bool orden(int a,int b,int c){
return a<b&&b<c;
}




