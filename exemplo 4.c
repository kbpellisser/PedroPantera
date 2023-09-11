#include <stdio.h>

main (){


int n1, n2 , soma, opcao;
do {
    printf ("Digite dois numeros: ");
    scanf ("%d %d", &n1, &n2);

    soma= n1 + n2;
    printf ("Soma: %d", soma);

    printf ("\nDeseja fazer uma nova soma? 1- Sim, 0 - Nao: ");
    scanf ("%d", &opcao);

}while(opcao !=40);

}