#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

typedef struct
{
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} User;

// Dados de exemplo para o login
User registeredUser;

// Dados do produto
const char product[] = "Produto A";
const float price = 10.0;

int main()
{
    char inputUsername[MAX_USERNAME_LENGTH];
    char inputPassword[MAX_PASSWORD_LENGTH];

    // Registra o usuário
    printf("\n=== Registro de Usuario ===\n");
    printf("Crie seu nome de usuario: ");
    scanf("%s", registeredUser.username);
    printf("Crie sua senha: ");
    scanf("%s", registeredUser.password);

    printf("\n");
    printf("Usuario registrado com sucesso!\n\n");

    system("pause");
    system("cls");

    // Solicita ao usuário para fazer login
    printf("\n=== Sistema de Login ===\n");
    printf("Nome de usuario: ");
    scanf("%s", inputUsername);
    printf("Senha: ");
    scanf("%s", inputPassword);

    printf("\n");
    system("pause");
    system("cls");

    // Verifica se o nome de usuário e senha estão corretos
    if (strcmp(inputUsername, registeredUser.username) == 0 && strcmp(inputPassword, registeredUser.password) == 0)
    {
        printf("\nLogin bem-sucedido!\n");

        // Mostra o produto disponível e solicita a compra
        printf("\n=== Compra de Produto ===\n");
        printf("Produto disponivel: %s\n", product);
        printf("Preco: R$%.2f\n", price);

        float userMoney;
        printf("Digite o valor disponivel para a compra: R$");
        scanf("%f", &userMoney);

        if (userMoney >= price)
        {
            printf("\nCompra realizada com sucesso! Obrigado!\n");
            printf("Troco: R$%.2f\n", userMoney - price);
        }
        else
        {
            printf("\nSaldo insuficiente para a compra.\n");
        }
    }
    else
    {
        printf("Nome de usuario ou senha incorretos. Acesso negado.\n");
    }

    return 0;
}