# Projeto de Aprendizado em Linguagem C

Neste Repositorio estarei usando usado de bibliotecas e ainda tambem estarei aprendendo a logica de programacao e parte basica da linguagem C usando em projetos de programacao embarcada:

<div align="center" style="display: inline_block">
<img alt="java" width="120" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">
</div>

## Conceito de Bibliotecas em Linguagem de Programacao

<div align="center" style="display: inline_block">
<img alt="java" width="120" src="./icons/biblioteeeca.png">
</div>

Toda linguagem de programacao por padrao usar de um conjunto de códigos pré-compilados que fornecem funcionalidades específicas para os programadores. 

Elas são desenvolvidas por outras pessoas ou pela própria comunidade de programadores para facilitar o desenvolvimento de software, permitindo que os desenvolvedores reutilizem código já escrito em vez de escrever tudo do zero.

### Reutilização de Código: 

- As bibliotecas fornecem um conjunto de funções, classes, estruturas de dados ou outros recursos que podem ser utilizados em diferentes programas. 

- Isso significa que os desenvolvedores podem aproveitar o trabalho de outros programadores, economizando tempo e esforço.

### Abstração: 

- As bibliotecas fornecem uma camada de abstração sobre o código subjacente. 

- Isso significa que os desenvolvedores podem usar as funcionalidades fornecidas pela biblioteca sem precisar entender todos os detalhes de implementação.

### Encapsulamento: 

- As bibliotecas geralmente encapsulam a funcionalidade relacionada em módulos separados, o que promove a modularidade e ajuda a manter o código organizado e gerenciável.

### Documentação: 

- As boas bibliotecas geralmente vêm com documentação detalhada que descreve como usar suas funções ou classes, quais parâmetros são necessários e o que cada função retorna. 

- Isso ajuda os desenvolvedores a entenderem como usar a biblioteca corretamente.

### Economia de Recursos: 

- Ao utilizar bibliotecas, os desenvolvedores podem economizar recursos de hardware e tempo de desenvolvimento, pois não precisam reinventar a roda ao implementar funcionalidades comuns.

### No geral, as bibliotecas desempenham um papel fundamental no desenvolvimento de software moderno, facilitando a reutilização de código, promovendo a eficiência e permitindo que os desenvolvedores concentrem seus esforços nas partes únicas e específicas de seus projetos.


## Explicacao Sobre as Principais Bibliotecas mais usada no repositorio

<br>
<div align="center" style="display: inline_block">
<img alt="java" width="120" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-line.svg">
</div>

### <stdio.h>

- Esta biblioteca fornece funções para entrada e saída de dados. 

- Ela inclui funções como printf() para imprimir dados na saída padrão, scanf() para ler dados da entrada padrão, e várias outras funções para operações de arquivo, como fopen(), fclose(), fread(), fwrite(), etc.

Aqui está um exemplo simples de uso da biblioteca <stdio.h> em C para entrada e saída de dados:

```c
#include <stdio.h>

int main() {
    int idade;
    char nome[50];

    // Solicita ao usuário inserir seu nome
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // Solicita ao usuário inserir sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Exibe uma mensagem de saudação com o nome e idade fornecidos
    printf("Olá, %s! Você tem %d anos.\n", nome, idade);

    return 0;
}
```


### <stdlib.h>

- A biblioteca padrão fornece funções para alocação de memória (malloc(), calloc(), realloc(), free()), controle de processo (exit(), system()), 

- geração de números aleatórios (rand(), srand()), conversão de string para números (atoi(), atof()) e outras funções úteis.

Aqui está um exemplo simples de uso da biblioteca <stdlib.h> em C para gerar números aleatórios:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Define a semente para a função rand()
    srand(time(NULL));

    // Gera e exibe 5 números aleatórios entre 0 e 99
    printf("Números aleatórios:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 100);
    }

    return 0;
}
```

### <math.h>

- sta biblioteca fornece funções matemáticas para operações comuns, como trigonometria (sin(), cos(), tan()), exponenciação (exp(), log()), 

- arredondamento (ceil(), floor()), raiz quadrada (sqrt()), além de constantes matemáticas como π e e.

Aqui está um exemplo simples de uso da biblioteca <math.h> em C para calcular a raiz quadrada de um número:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;
    double raiz;

    // Calcula a raiz quadrada de num
    raiz = sqrt(num);

    printf("A raiz quadrada de %.2f é %.2f\n", num, raiz);

    return 0;
}
```

### <string.h>

- A biblioteca de strings fornece funções para manipulação de strings em C. 

- Isso inclui funções para cópia (strcpy(), strncpy()), concatenação (strcat(), strncat()), comparação (strcmp(), strncmp()), busca (strchr(), strstr()) e outras operações relacionadas a strings.

Aqui está um exemplo simples de uso da biblioteca <string.h> em C para manipulação de strings:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = " World!";

    // Concatenar str2 no final de str1
    strcat(str1, str2);
    printf("Concatenada: %s\n", str1);

    // Copiar str1 para str3
    char str3[20];
    strcpy(str3, str1);
    printf("Copiada: %s\n", str3);

    // Compara str1 com str3
    int result = strcmp(str1, str3);
    if (result == 0)
        printf("As strings são iguais.\n");
    else if (result < 0)
        printf("str1 vem antes de str3.\n");
    else
        printf("str1 vem depois de str3.\n");

    // Tamanho da string
    printf("Tamanho de str1: %d\n", strlen(str1));

    return 0;
}
```

### <time.h>

- Esta biblioteca fornece funções para manipulação de tempo e data. 

- Ela inclui funções para obter o tempo atual (time()), converter estruturas de tempo (localtime(), gmtime()), formatação de data e hora (strftime()), e outras operações relacionadas ao tempo.

Aqui está um exemplo simples de uso da biblioteca ***<time.h>*** em C para obter e exibir a hora atual:

```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *timeInfo;
    char timeString[80];

    // Obter o tempo atual
    time(&currentTime);

    // Converter o tempo para uma estrutura tm
    timeInfo = localtime(&currentTime);

    // Formatar o tempo como uma string
    strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", timeInfo);

    // Exibir o tempo atual formatado
    printf("O tempo atual é: %s\n", timeString);

    return 0;
}
```

### <locale.h>

- Permite que os programas em C sejam adaptados para diferentes configurações regionais, como idioma, formatação de datas, números e moeda, entre outras coisas.

- Ela fornece funções para definir e obter a configuração regional atual, bem como para realizar operações sensíveis à localização.

- ***setlocale():*** Esta função é usada para definir ou obter a configuração regional atual. Ela permite que o programa especifique uma configuração regional específica ou use a configuração regional padrão do sistema.

- ***localeconv():*** Esta função retorna uma estrutura que contém informações sobre a formatação de números e moedas na configuração regional atual.

- Outras funções relacionadas a operações sensíveis à localização, como strcoll() para comparação de strings sensível à localização e strftime() para formatação de data e hora sensível à localização.

Usar corretamente a biblioteca ***<locale.h>*** pode melhorar a usabilidade e a aceitação de um aplicativo em diferentes partes do mundo, pois permite que ele seja adaptado para atender às expectativas culturais dos usuários.

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Define a configuração regional para português do Brasil
    printf("Número formatado: %f\n", 12345.67);
    return 0;
}
```

### <windows.h>

- A biblioteca <windows.h> é específica para o ambiente Windows e oferece acesso a muitas funcionalidades do sistema operacional Windows. 

- ***Manipulação de Janelas:*** A <windows.h> fornece funcionalidades para criar, manipular e controlar janelas de aplicativos do Windows. Isso inclui funções para criar janelas, registrar classes de janelas, gerenciar mensagens de janelas, etc.

- ***Manipulação de Recursos:*** A <windows.h> fornece funcionalidades para manipular recursos, como ícones, cursores, fontes e imagens. Isso permite que os programas do Windows carreguem e exibam recursos gráficos.

```c
#include <windows.h>

int main() {
    // Exibe uma caixa de diálogo de alerta
    MessageBox(NULL, "Olá, mundo!", "Mensagem de Alerta", MB_OK | MB_ICONINFORMATION);

    return 0;
}
```


## Extencao usada no Vs.code 

A Extencao usada para compilar o codigo da Liguagem C foi a seguinte: 

<div align="center" style="display: inline_block">
<img alt="java" src="./icons/Captura de tela 2024-03-19 151234.png">
</div>

alem dessa extencao vc vai ter quee usar o compilador GCC para usar a extencao funcinar 

<div align="center" style="display: inline_block">
<img alt="java" width="120" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/gcc/gcc-original.svg">
</div>

### Requisitos

- Se você estiver no Linux você deve instalar o gcc
- Se você estiver no Windows você deve instalar o tdm-gcc
- Se você estiver no Mac OS, você deve instalar o clang/gcc

### Como usar

Certifique-se de ter o arquivo .c ou .cpp aberto. Pressione “F6”, isso irá compilar e executar o arquivo usando argumentos padrão nas configurações. 

Se você pressionar "F7", serão usados ​​os argumentos que você especificou para o programa. Você também pode depurar pressionando “F5”. Ou você pode usar a barra de status/itens de menu.

Se você deseja registrar o caminho gcc/g++ manualmente, você pode configurá-lo nas configurações. 

Você também pode configurar para salvar o arquivo antes de compilar.

