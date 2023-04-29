#include<stdio.h>
/*3. Escribir un programa que lea una frase caracter a caracter utilizando scanf.
 4. Leer una frase y mostrarla con un carácter en cada línea. 
5. Leer una frase y contar el número de vocales de cada */
char a[50];
char b[10
];
char c='a';
int vocales(char c[]);

int main()
{printf("escriva una frace caracter a caracter al terminar colque un. ");
   for(int i=0;(i<50)&&(c!='.');i++){
scanf("%c",&c);
a[i]=c;
   }
printf("escriva una frace ");

for (int i = 0; i <10; i++)
{
  printf("%c\n",b[i]);
}
printf("el nimero de vocales es:%i",vocales(a));
    return 0;
}
int vocales(char c[]){

    int num=0;
    for(int i=0;i<50;i++){
        if((c[i]=='a')||(c[i]=='e')||(c[i]=='i')||(c[i]=='o')||(c[i]=='u')){num++;}
    }
    return num;
}