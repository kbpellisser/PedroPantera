#include <stdio.h>

main (){


int n = 2, contador = 0, res;
/*
while (n <= 10){
      if (n < 5){
        printf ("\n Numero: %d", n);
      }
      n++;
}*/

while (contador <= 10){
    res = n * contador;
    printf ("\n %d * %d = %d", n , contador , res);
    contador ++;
}


}