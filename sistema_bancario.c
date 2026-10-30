#include <stdio.h>

int main() {
    int opcao = 0;
    int caractere;
    float saldo = 0.0;
    float valor;

    printf("=== SISTEMA BANCARIO ===\n");
    printf("Este sistema permite realizar operacoes bancarias de forma simples e segura.\n");
    printf("Ola! Seja bem-vindo(a) ao nosso banco.\n");

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar saque\n");
        printf("4 - Encerrar sistema\n");
        printf("Digite a opcao desejada: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida. Digite um numero entre 1 e 4.\n");

            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }

            continue;
        }

        switch (opcao) {
            case 1:
                printf("Seu saldo atual e: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor do deposito: R$ ");

                if (scanf("%f", &valor) != 1 || valor <= 0) {
                    printf("Valor invalido. O deposito deve ser maior que zero.\n");

                    while ((caractere = getchar()) != '\n' && caractere != EOF) {
                    }
                } else {
                    saldo += valor;
                    printf("Deposito realizado com sucesso!\n");
                }
                break;

            case 3:
                printf("Digite o valor do saque: R$ ");

                if (scanf("%f", &valor) != 1 || valor <= 0) {
                    printf("Valor invalido. O saque deve ser maior que zero.\n");

                    while ((caractere = getchar()) != '\n' && caractere != EOF) {
                    }
                } else if (valor > saldo) {
                    printf("Saldo insuficiente para realizar o saque.\n");
                } else {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                }
                break;

            case 4:
                printf("\nObrigado por utilizar o Sistema Bancario.\n");
                printf("Seu saldo final e: R$ %.2f\n", saldo);
                printf("Ate logo!\n");
                break;

            default:
                printf("Opcao invalida. Digite um numero entre 1 e 4.\n");
        }

    } while (opcao != 4);

    return 0;
}
