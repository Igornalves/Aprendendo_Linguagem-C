
// criação de uma calculadora em c usando uma função e switch case de uma forma intuitiva ok

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// tipo primitivo que reserva espaço de memoria do tipo inteiro
int n1, n2, res, op;

// funcao que não retorna nada
void menu()
{
    // tambem posso usar o sistem para colorir o terminal para que possa ser possivel ficar com um estilo bonito no terminal
    system("color 2");

    // Define a localidade para o padrão, que é a página de código ANSI padrão do usuário obtida do sistema operacional
    setlocale(LC_ALL, "portuguese");

    printf("+++++++++++++++++++++++++++++++++\n");
    printf("|          Calculadora           |\n");
    printf("|--------------------------------|\n");
    printf("|   1 - Somar |  2 -Subtracao    |\n");
    printf("|--------------------------------|\n");
    printf("|   3 - Dividir|  4 -Multiplicar |\n");
    printf("|--------------------------------|\n");

    // Aqui vc pode quebra uma linha de forma que fique mais bonita no compilador mais é opcional
    printf("\n");
    printf("Informe a operacao desejada:\n");
    scanf("%d", &op);
}

// função que retorna um tipo inteiro e tambem é a função principal
int main()
{
    do
    {

        // vc esta chamando a funcao que vc criou chamanda main
        menu();

        // aqui vc tambem pode fazer dessa mesma forma usando um printf para quebra uma linha ou colocando dentro da String que esta na linha 33
        printf("\n");
        printf("Informe o primeiro valor\n");
        scanf("%d", &n1);
        printf("Informe o segundo valor\n");
        scanf("%d", &n2);

        // cada uma dos switch case faz uma operação certinha aqui para a calculadora
        switch (op)
        {

        case 1:
        { /*somar*/
            res = n1 + n2;
            break;
        }
        case 2:
        { /*subtração*/
            res = n1 - n2;
            break;
        }
        case 3:
        { /*divisão*/
            res = n1 / n2;
            break;
        }
        case 4:
        { /*multiplicação*/
            res = n1 * n2;
            break;
        }
        }

        // Aqui a mesma coisa vc pode usa um printf para deixar essa parte do resultado final mais legivel para o usuario do sistema
        printf("\n");
        printf("|------------------------------------------------|\n");
        printf("  O resultado da operacao SELECIONADA foi de: %d\n", res);
        printf("|------------------------------------------------|\n\n\n");

        // na linha 73 e 74 vc cria uma pause na repetição de forma que o sistema mostra o resultado para o usuario assim que ele clicar em qualquer tecla em vao voltar para a repetiçao do codigo
        system("pause");
        system("cls");

    } while (op != 0);
}