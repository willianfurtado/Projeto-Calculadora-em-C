#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int modo;
    float n1, n2;

    setlocale(LC_ALL, "Portuguese");

    printf("#############################################\n");
    printf("#              CALCULADORA                   #\n");
    printf("#############################################\n\n");

    printf("Escolha um modo de operação:\n");
    printf("1 - Modo simples\n");
    printf("2 - Modo científico\n");
    printf("3 - Modo financeiro\n");
    printf("O - Sair da calculadora\n");
    printf("Modo escolhido: ");
    scanf("%d", &modo);

    switch(modo)
    {
    
    case 0:
        printf("Você saiu da calculadora: ");
        break;

    case 1: {
        int op, num1, num2;
        
        printf("-----CALCULADORA BÁSICA--------\n");
        printf("Escolha a operação:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("Operação escolhida: ");
        scanf("%d", &op);
        
        switch(op) {
            case 1: 
               printf("Digite um numero: ");
               scanf("%f", &num1);
               printf("Digite outro numero: ");
               scanf("%f", &num2); 
               printf("%.1f + %.1f = %.1f\n", n1, n2, n1 + n2);
               break;

            case 2: 
               printf("Digite um numero: ");
               scanf("%f", &num1);
               printf("Digite outro numero: ");
               scanf("%f", &num2); 
               printf("%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);
               break;
            
            case 3: 
               printf("Digite um numero: ");
               scanf("%f", &num1);
               printf("Digite outro numero: ");
               scanf("%f", &num2); 
               printf("%.1f * %.1f = %.1f\n", n1, n2, n1 * n2);
               break;
            
            case 4: 
               printf("Digite um numero: ");
               scanf("%f", &num1);
               printf("Digite outro numero: ");
               scanf("%f", &num2); 
               printf("%.1f / %.1f = %.1f\n", n1, n2, n1 / n2);
               break;

            default:
                break;
        }        
            printf("-----------------------------------\n");
            break;
    }

    case 2:{    
        
        int oper;
        float pot;
        
        printf("-----CALCULADORA CIENTIFICA--------\n");
        printf("Escolha a operação:\n");
        printf("1 - Potenciacao\n");
        printf("2 - Raiz quadrada\n");
        printf("3 - Logaritmo na base 10\n");
        printf("4 - Seno, Cosseno e Tangente\n");
        printf("Operação escolhida: ");
        scanf("%d", &oper);
        printf("Digite um número: ");
        scanf("%f", &n1);
        printf("Digite um número: ");
        scanf("%f", &n2);

        switch (oper)
        {
        case 1:
            printf("Digite qual a potenciação desejada: ");
            scanf("%f", &pot);
            printf("-----------------------------------------\n");
            printf("%.1f elevado a %.1f = %.1f\n", n1, pot, pow(n1,pot));
            printf("%.1f elevado a %.1f e %.1f = %.1f\n", n2, pot, pow(n2,pot));
            printf("-----------------------------------------\n");
            break;
        
        case 2:
            printf("----------------RADICIAÇÃO---------------------\n");
            printf("Raiz quadrada de %.1f = %.1f\n", n1, sqrt(n1));
            printf("Raiz quadrada de %.1f = %.1f\n", n2, sqrt(n2));
            printf("-----------------------------------------\n");
            break;

        case 3:
            printf("----------------LOGARITMO--------------------\n");
            printf("Logaritmo de %.1f na base 10 = %.1f\n", n1, log10(n1));
            printf("Logaritmo de %.1f na base 10 = %.1f\n", n2, log10(n2));
            printf("-----------------------------------------\n");
            break;

        case 4:{
            int operation;
            
            printf("--------------TRIGONOMETRIA-----------------------\n");
            printf("Escolha a operação: ");
            printf("1 - Cálculo de Seno\n");
            printf("2 - Cálculo de Cosseno\n");
            printf("3 - Cálculo de Tangente\n");
            printf("0 - Sair\n");
            printf("Operação escolhida: ");
            scanf("%d", &operation);

            switch (operation)
            {

            case 0:
                printf("Saindo...");
                break;

            case 1:
                printf("-----------------------------------------\n");
                printf("Seno de %.1f = %.1f\n", n1, sin(n1));
                printf("Seno de %.1f = %.1f\n", n2, sin(n2));
                break;

            case 2:
                printf("-----------------------------------------\n");
                printf("Cosseno de %.1f = %.1f\n", n1, cos(n1));
                printf("Cosseno de %.1f = %.1f\n", n2, cos(n2));
                break;

            case 3:
                printf("-----------------------------------------\n");
                printf("Tangente de %.1f = %.1f\n", n1, tan(n1));
                printf("Tangente de %.1f = %.1f\n", n2, tan(n2));
                break;
            
            default:
                break;
            }
        }

        default:
            break;
        }
    
    }
    case 3:{
        int operacao;
        float capital, taxa, meses, juros, montante;
        float i, investimento, taxaDesconto, periodo, vpl;
        double fluxoDeCaixa;
        float cap, taxaCompostos, jurosCompostos, temp;

        printf("-----CALCULADORA FINANCEIRA--------\n");
        printf("Escolha a operação:\n");
        printf("1 - Calculo de Juros Simples\n");
        printf("2 - Calculo de Juros Compostos\n");
        printf("Operação escolhida: ");
        scanf("%d", operacao);

        switch (operacao)
        {
        case 1:
            printf("-----------CÁLCULO DE JUROS SIMPLES---------\n");
            printf("Digite o capital: ");
            scanf("%f", &capital);
            printf("Digite o valor da taxa: ");
            scanf("%f", &taxa);
            printf("Digite a quantidade de meses: ");
            scanf("%f", &meses);
            juros = capital * taxa * meses;
            montante = capital + juros;
            printf("O valor do juros é: %.1f\n", juros);
            printf("O valor do montante é: %.1f\n", montante);
            printf("----------------------------------");
            break;

        case 2:
            printf("----------CÁLCULO DE JUROS COMPOSTOS------------\n");
            printf("Digite o valor do capital: ");
            scanf("%f", &cap);
            printf("Digite o valor da taxa: ");
            scanf("%f", &taxaCompostos);
            printf("Digite a quantidade de tempo: ");
            scanf("%f", &temp);
            jurosCompostos = capital * pow((1 + taxa / 100), temp);
            printf("O valor do juros composto é: %.1f", jurosCompostos);
            printf("-----------------------------------");
            break;
        default:
            break;
        }
    }
    
    default:
        return 0;      
        break;
    }

    printf("Se o sistema apresentar erros, não se desespere e aguarde a próxima atualização");
    printf("Sistema em produção.......................................................");
}