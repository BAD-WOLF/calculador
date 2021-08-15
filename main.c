#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define GREEN "\x1b[0;32m"
#define RED "\x1b[0;31m"
#define YELLOW "\x1b[0;33m"
#define CYAN "\x1b[0;36m"
#define DEFAULT "\x1b[0;0m"

int main()
{
  printf(CYAN);
  printf("*****************************\n");
  printf("******** CALCULADORA ********\n");
  printf("*****************************\n");   
  printf("*****************************\n");
while(1){
 int num1, num2;
    char carak;
    printf(DEFAULT GREEN "\nSuas opções são:\n\n[+] para soma\n[-] para subtração\n[/] para divisão\n[*] para multiplicação\n[^] para potênciação\n[0] para sair\n\n");
    printf("qual sua opção? >> "DEFAULT YELLOW);
    scanf(" %c", &carak);
    printf(DEFAULT GREEN);
   if(carak == '+'){
    printf("digite o primeiro número >> ");
    scanf("%i", &num1);
    printf("\ndigite o segundo número >> ");
    scanf("%i", &num2);
    printf("o resultado da soma foi: {{ %i }}\n", num1 + num2);
   }else if(carak == '-'){
    printf("digite o primeiro número >> ");
    scanf("%i", &num1);
    printf("digite o segundo número >> ");
    scanf("%i", &num2);
    printf("o resultado da subtração foi: {{ %i }}\n", num1 - num2);
}else if(carak == '/'){
    printf("digite o primeiro número >> ");
    scanf("%i", &num1);
    printf("digite o segundo número >> ");
    scanf("%i", &num2);
if(num2 == 0){
    printf("é uma questão de lógica seu burro.\num número duvido pra 0 é 0\ne um 0 duvido por um número maior q o é impossível poha\n\n");         
}else{
    printf("o resultado da divisão foi: {{ %i }}\n", num1 / num2);
    printf("o resto da divisão foi: {{ %i }}\n", num1 % num2);
}
}else if(carak == '*'){
    printf("digite um número >> ");
    scanf("%i", &num1);
    printf("digite outro número >> ");
    scanf("%i",& num2);
if(num1 == 0 || num2 == 0){
    printf("o resultado da multiplicação foi: {{ 0 }}\n");
}else{
	    printf("o resultado da multiplicação foi: {{ %i }}\n", num1 * num2);
}
}else if(carak == '^'){
   printf("Digite a base >> ");
   scanf("%i", &num1);
   printf("Digite o expoente >> ");
   scanf("%i", &num2);
   printf("O resultado da potência foi {{%.2f}}\n", pow(num1, num2));
}	
else if(carak == '0'){
   exit(0);
}else{
   printf(DEFAULT RED"\nDigite uma opcao válida!\n");
   
   continue;
}
}
return 0;
}
