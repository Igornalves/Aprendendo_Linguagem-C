#include <stdio.h>
#include <stdlib.h>

int main()
{

    // aqui estaremos colocando um codigo de entrada de dados

    // Nos dois codigos abaixo temos um Scanf que recebe os dados que o usuario inserir para serem colocados de acordo com a pergunta feita no print

    // note que dentro do scanf tem um & comercial que informa qual variavel vai receber os dados coletados pelo usuario

    // nesse char colocamos que ele vai ter 20 espacos de memoria para que possa obter o nome, pois não temos a palavra reservada String na linguagem C

    char nome[20];
    printf("Qual e o seu primero nome? ");
    scanf("%s", &nome);

    char sexo[1];
    printf("Qual e o seu genero M/F? ");
    scanf("%s", &sexo);

    // dessa forma temos uma print que vai imprimir todos os dois dados coletados para mostra para o usuario

    printf("\n\nseu nome e %s\n", nome);
    
    printf("\nja o seu genero e %s \n\n",sexo);

    // cls é usado para limpar os dados do terminal em C usando juntamente o pause para encerrar o programa e ir para outro

    system("pause");
    system("cls");

    // o Scanf não é o recomandado para usar em uma string porem existe uma que é recomendada porem por padrão o gets são o recomendado para mexer com string

    char nomeCompleto[25];
    printf("Qual e o seu nome completo? ");
    gets(nomeCompleto);

    char genero[1];
    printf("Qual e o seu genero M/F? ");
    gets(genero);

    // porem para mexer com numero e dados primitivos do tipo numerico o scanf é o indicado

    int idade;
    printf("Qual a seu idade? ");
    scanf("%d", &idade);

    float peso;
    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    // dessa forma temos uma print que vai imprimir todos os dois dados coletados para mostra para o usuario

    printf("\n Seu nome e %s ,\n a sua idade e de %d anos,\n ja o seu peso e de %.1f kg,\n seu genero e %s \n\n", nomeCompleto, idade, peso, genero);

    // cls é usado para limpar os dados do terminal em C usando juntamente o pause para encerrar o programa e ir para outro

    system("pause");
    system("cls");

    // vc tambem com o scanf pode inserir 2 ou mais variaveis para obter dados

    int n1, n2;
    printf("\n\ndigite o valor de duas variaveis: \n");
    scanf("%d %d", &n1, &n2);

    // dessa forma temos uma print que vai imprimir todos os dois dados coletados para mostra para o usuario

    printf("\n os dados inseridos das duas variaveis sao de: %d e %d \n\n", n1, n2);

    return 0;
}