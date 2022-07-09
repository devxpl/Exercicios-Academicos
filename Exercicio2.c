#include <stdio.h>
#include <stdlib.h>


//*  escreva um algoritmo  que calcule o IMC  de uma pessoa ( indice de massa corporal ).
//*  o calculo de imc  é feito dividindo o peso  em quilogramas  pela altura  em metros quadrado.

int main(){

    float peso;
    float altura;
    float imc;

//* ENTRADA DE DADOS
    printf("Digite o peso do paciente \n");
    scanf("%f",&peso);

    printf("Digite a altura do paciente \n");
    scanf("%f",&altura);
//* PROCESSAMENTO
    imc = peso/(altura*altura);
//*SAIDA
    printf(" O resultado do IMC e : %.2f \n",imc);

//* TABELA IMC

    if (imc < 18.5){
        printf("Abaixo do peso");
    };
    if (imc >= 18.6 && imc < 24.9){
        printf("Peso ideal parabens");
    };
    
    if (imc >= 25 && imc <= 29.9){
        printf("levemente acima do peso");
    };

    if (imc >= 30 && imc <= 34.9){
        printf("Obsidade de grau I");
    };

    if (imc >= 35 && imc <= 39.9){
        printf("Obsidade de grau II ");
    };
    
    if (imc > 40){
        printf("Obsidade de grau III");
    };
  return 0;
}

