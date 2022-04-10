#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define GREEN   32
#define RED     31
#define YELLOW  33
#define CYAN    36

#define CREATE_COLOR(COLOR, CODE,end) #CODE#COLOR#end
#define COLOR(X) CREATE_COLOR(X, \033[0;,m)

int main()
{
        printf("%s*****************************\
        \n******** CALCULADORA ********\
        \n*****************************\
        \n*****************************\n", COLOR(CYAN));
        setlocale(LC_ALL, "Portuguese");
        while(1){
                int num1, num2;
                char carak;
                printf("\n%sSuas opções são:\
                        \n\n[+] para soma\n[-] para subtração\
                        \n[/] para divisão\
                        \n[*] para multiplicação\
                        \n[^] para potênciação\
                        \n[0] para sair\n\n", COLOR(YELLOW));

                printf("%squal sua opção? >> ", COLOR(YELLOW));
                scanf("%c", &carak);
                puts(COLOR(GREEN));

                switch(carak){
                        case '+':
                                puts("digite o primeiro número >> ");
                                scanf("%i", &num1);
                                puts("\ndigite o segundo número >> ");
                                scanf("%i", &num2);
                                printf("o resultado da soma foi: {{ %i }}\n", num1 + num2);
                        case '-':
                                puts("digite o primeiro número >> ");
                                scanf("%i", &num1);
                                puts("digite o segundo número >> ");
                                scanf("%i", &num2);
                                printf("o resultado da subtração foi: {{ %i }}\n", num1 - num2);
                        case '/':
                                puts("digite o primeiro número >> ");
                                scanf("%i", &num1);
                                puts("digite o segundo número >> ");
                                scanf("%i", &num2);
                                if(num2 != 0){
                                        printf("o resultado da divisão foi: {{ %i }}\n", num1 / num2);
                                        printf("o resto da divisão foi: {{ %i }}\n", num1 % num2);
                                }else{
                                        puts("Error: divisão por zero");
                                }
                        case '*':
                                puts("digite um número >> ");
                                scanf("%i", &num1);
                                puts("digite outro número >> ");
                                scanf("%i",& num2);
                                printf("o resultado da multiplicação foi: {{ %i }}\n", num1 * num2);
                        case '^':
                                puts("Digite a base >> ");
                                scanf("%i", &num1);
                                puts("Digite o expoente >> ");
                                scanf("%i", &num2);
                                printf("O resultado da potência foi {{%.2f}}\n", pow(num1, num2));
                        case 0:
                                exit(0);
                        default:
                                printf("\n%sigite uma opcao válida!\n", COLOR(RED));
                        }
        }
        return 0;
}
