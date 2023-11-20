#include <iostream>

#include "stdio.h" 
#include "stdlib.h" 

 

 int main() { 

      

     float salario, inss, ir, sal_liquido; 

      

     printf("Calculo de Salario Liquido Com desconto do IR e INSS\n\n"); 

     printf("\nDigite seu salario Bruto\n");  

     scanf("%f", &salario); 

      

     //Calcular o INSS  

     if ( salario <= 1693.72) { 

      

     inss = salario * 0.08;  

          

     } 

     else 

      

     if ( salario >= 1693.73 && salario <= 2822.90) { 

          

         inss = salario * 0.09;  

          

     } 

      

     sal_liquido = (salario - inss) - ir; //Resultados 

      

     printf( "\nDesconto do INSS e: %.2f\n\n",inss); 

     printf( "Desconto do imposto de renda e: %.2f\n\n",ir); 

     printf( "Salario liquido: %.2f\n\n", sal_liquido); 

     return 0; 

      

      

 } 
