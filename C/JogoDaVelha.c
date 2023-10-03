#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main() {
    int i, j, opcao, linha, coluna, jogador;
    char jogo[TAM][TAM];
    
    for(i = 0; i < TAM; i++)

    printf("-----Bem Vindo ao Jogo da Velha!-----\n");

    // Preencha o tabuleiro com valores iniciais visíveis para o jogador
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            jogo[i][j] = 'x';
        }
    }

    do {
        printf("- Pressione -1 para sair ou 0 para jogar!\n");
        scanf("%d", &opcao);

        if (opcao == 0) {
        	
        		printf("Jogador 1 = a\n");
            	printf("jogador 2 = b\n");
            	printf("Quem comeca (1 ou 2): ");
            	scanf("%d", &jogador);
            	
            do {
            	
                // Exiba o tabuleiro
                for (i = 0; i < TAM; i++) {
                    for (j = 0; j < TAM; j++) {
                        printf("%c ", jogo[i][j]);
                    }
                    printf("\n");
                }

                printf("\nQual posicao deseja inserir:\n");
                for(i = 0; i < TAM; i++){
                	for(j = 0; j < TAM; j++){
                		printf("Posicao [%d][%d]\n", i, j);
					}
				}
                
                printf("Selecione a linha: ");
                scanf("%d", &linha);
                printf("Selecione a coluna: ");
                scanf("%d", &coluna);

                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                    if (jogo[linha][coluna] == 'x') {
                    	if(jogador == 1)
                        	jogo[linha][coluna] = 'a';
                        else
                        	jogo[linha][coluna] = 'b';
                    } else {
                        printf("Posicao ja ocupada! Escolha outra.\n");
                    }
                } else {
                    printf("Posicao invalida! Escolha uma posicao entre 0 e 2.\n");
                }
                
                if(jogador == 1)
                	jogador = 2;
                else
                	jogador = 1;

            } while (opcao != -1);
        }

    } while (opcao != -1);

    return 0;
}

