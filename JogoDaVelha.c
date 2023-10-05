#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main() {
    int i, j, opcao, linha, coluna, jogador, ganhou = 0, sumTotal = 0;
    int jogo[TAM][TAM];

    printf("-----Bem Vindo ao Jogo da Velha!-----\n");

    // Preencha o tabuleiro com valores iniciais visíveis para o jogador
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            jogo[i][j] = 0;
        }
    }

    do {
        printf("- Pressione -1 para sair ou 0 para jogar!\n\n");
        scanf("%d", &opcao);
        
        if(opcao != -1 && opcao != 0)
        	printf("Selecione -1 ou 0!\n");

        if (opcao == 0) {
            printf("Jogador 1\n");
            printf("Jogador 2\n");
            printf("Quem comeca (1 ou 2): ");
            scanf("%d", &jogador);

            do {
                // Exiba o tabuleiro
                for (i = 0; i < TAM; i++) {
                    for (j = 0; j < TAM; j++) {
                        printf("%d ", jogo[i][j]);
                    }
                    printf("\n");
                }

                if (jogador == 1)
                    printf("\nJogador 1:\n");
                else
                    printf("\nJogador 2:\n");

                printf("Qual posicao deseja inserir:\n");
                for (i = 0; i < TAM; i++) {
                    for (j = 0; j < TAM; j++) {
                        printf("Posicao [%d][%d]\n", i, j);
                    }
                }

                printf("Selecione a linha: ");
                scanf("%d", &linha);
                printf("Selecione a coluna: ");
                scanf("%d", &coluna);

                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                    if (jogo[linha][coluna] == 0) {
                        if (jogador == 1)
                            jogo[linha][coluna] = 1;
                        else
                            jogo[linha][coluna] = 2;
                    } else {
                        printf("Posicao ja ocupada! Escolha outra.\n");
                        continue; // Continue para que o jogador escolha outra posição
                    }
                } else {
                    printf("Posicao invalida! Escolha uma posicao entre 0 e 2.\n");
                    continue; // Continue para que o jogador escolha outra posição
                }

                // Verifique se alguém venceu
                for (i = 0; i < TAM; i++) {
                    // Verifique as linhas
                    if (jogo[i][0] == jogador && jogo[i][1] == jogador && jogo[i][2] == jogador) {
                        printf("Jogador %d venceu!\n\n", jogador);
                        ganhou = 1;
                    }
                    // Verifique as colunas
                    if (jogo[0][i] == jogador && jogo[1][i] == jogador && jogo[2][i] == jogador) {
                        printf("Jogador %d venceu!\n\n", jogador == 1 ? 1 : 2);
                        ganhou = 1;
                    }
                }
                // Verifique as diagonais
                if (jogo[0][0] == jogador && jogo[1][1] == jogador && jogo[2][2] == jogador) {
                    printf("Jogador %d venceu!\n\n", jogador == 1 ? 1 : 2);
                    ganhou = 1;
                }
                if (jogo[0][2] == jogador && jogo[1][1] == jogador && jogo[2][0] == jogador) {
                    printf("Jogador %d venceu!\n\n", jogador == 1 ? 1 : 2);
                    ganhou = 1;
                }

                if(jogador == 1)
                	jogador = 2;
                else
                	jogador = 1;
                	
                sumTotal++;

                // Verifique se houve um empate
                if (sumTotal == TAM * TAM && ganhou == 0) {
                    printf("O jogo empatou!\n\n");
                    break;
                }

            } while (sumTotal <= 9 && ganhou == 0);
        }

    } while (opcao != -1);

    return 0;
}

