#include <stdio.h>
#include <stdlib.h>

int funcion();
int cubo(int *numero);
int main()
{
   int numero;
   int* num;

   printf("Introduzca un numero:\n ");
   scanf("%d", &numero);

   num = &numero;

   if(numero == 15){

    printf("\n%s", funcion(num));

   }else{

    printf("\n El numero al cubo es %d", cubo(num));


   }


    return 0;
}

int funcion(){
return "quince";

}
int cubo(int *numero){

return (*numero)*(*numero)*(*numero);

}
