#include <stdio.h>
#include <stdlib.h>
//* escreva um algoritmo na linguagem C 
 //* que receba  o preço de um produto  e calcule  e mostre  o novo preço com um desconto de 10%

 int main(){
    float bolsa;
    float desconto;

     printf (" Informe o valor da bolsa: \n");
     scanf("%f",&bolsa);

       desconto = bolsa - (bolsa * 0.1);

     printf("o preco da bolsa com desconto e: %f",desconto);


}