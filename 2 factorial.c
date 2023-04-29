#include<stdio.h>

int a;
int factorial(int a);
 

int main()
{
printf("Introduzca un numero");
scanf(" %i ",&a);
a= factorial(a);
printf("Su factorial es %i\n", a);
return 0;
}

int factorial(int a){
int b=1;
for (int c = 0; c<=a; c++)
{
 b=b*a;
 a-=1;
}
return b;

}

