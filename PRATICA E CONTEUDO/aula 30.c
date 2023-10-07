#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* utilizamos a biblioteca math.h
para que o sistema possa reconhecer calculos simples e complexos */

#include <locale.h>
/*usamos a biblioteca locale.h
para que o complilador reconhecar as regra de pontua��o do portugu�s*/

int main()
{

     setlocale(LC_ALL, "Portuguese");
     /*o setlocale foi colocado para especificar qual lingua
    ele deve reconhecer as regras de pontua��o*/

     system("color B0");
     /* j� o system color foi introduzido para que tanto o fundo do programa
     quanto a fonte do cursor tenha suas cores mudadas em rela��o a cor padr�o do sistema */

     int A, B, Soma;
     /* declaramos uma variavel atravez do int
     para que o valor na qual o usuario coloque seja guardada dentro dele */

     printf("\n");
     /* declaramos um printf com \n
     para que uma linha seja quebrada e dessa forma deixa mais organizado */

     printf("                         BEM VINDO AO SISTEMA DE SOMA DE NÚMEROS NATURAIS !!!");
     /* colocamos um printf para inserir algum dado
     para usuario dando espa�o para que possa ser centralizado o texto inserido */

     printf("\n");

     printf("                         informe um numero para que possamos realizar a sua soma");
     /* colocamos um printf para inserir algum dado
     para usuario dando espa�o para que possa ser centralizado o texto inserido */

     printf("\n\n");

     printf("                         OBS:.VOÇÊ SÓ PODE INSERIR DOIS NÚMEROS PARA ESTA OPERAÇÃO");

     printf("\n\n");

     printf("                         Digite um numero: ");
     scanf("%d", &A);
     /* declaramos um scanf
     para que qualquer valor que usuario seja guardado dentro da variavel
     que foi criada anteriormente */

     printf("\n");

     printf("                         Digite outro numero: ");
     scanf("%d", &B);

     Soma = A + B;
     /* criamos um calculo que sera executado e
     o resultado do calculo irar para a variavel int soma que foi feita no inicio */

     printf("\n");

     printf("                         O Valor da soma é igual: %d \a", Soma);
     /* dessa forma colocamos um printf
     ]ara que o resultado da variavel soma seja mostrado para o usuario */

     printf("\n\n\n");

     if (Soma > 10)
     /* colocamos um if para que caso a soma for algo
     ele mostra para o usuario uma mensagem */
     {
          printf("                                        \"O valor de sua soma é maior que 10\"");
     }
     else
     /* caso n�o for aquilo que era para ser o sistema vai mostra outra mensagem referente ao caso */
     {
          printf("                                      \"O valor de sua soma é menor ou igual a 10\"");
     }

     printf("\n\n\n");
     printf("                                           autor do sistema: igor nascimento");
     printf("\n\n");
     printf("                                        ");
     system("pause");

     /* colocamos espaço dentro de printf
     para que a mensagem de finalizaçao do sistema seja organizada */
}
