#include <stdio.h>
#include <stdlib.h>

int main() {
  
int numeros[5], entrada, procura, retorno, maior, menor, atual;

// entrada de numeros
for(entrada = 0; entrada <= 4; entrada++)
  {
  printf("Entre com o numero %d: ", entrada);
  scanf("%d", &numeros[entrada]);
  }
// descobrir menor e maior
menor = numeros[0];
maior = numeros[0];
  
for(procura = 0; procura < 5; procura++)
  { 
    if (menor  > numeros[procura])
    {
      menor  = numeros[procura];
    }
    if (maior  < numeros[procura])
    {
      maior  = numeros[procura];
    }   
  }

atual = maior;
// Imprimir o primeiro termo
printf("Ordem: %d, ", menor);

//Ordenamento
for(retorno = 0; retorno < 4; retorno++)
  {
    // Descobrir o menor seguinte
    for(procura = 0; procura < 5; procura++)
      {
        if (atual > numeros[procura] && numeros[procura] > menor)
        atual = numeros[procura];
        
      }
    printf("%d, ", atual);
    // Correção de valores para o próximo loop
    menor = atual;
    atual = maior;
  
  }
system("pause");
}