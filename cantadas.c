#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_cantada() {
    // Array de cantadas 
    char *cantadas[] = {
        "Se beleza fosse tempo, você seria a eternidade.",
        "Você não é Wi-Fi, mas sinto uma conexão entre nós.",
        "Me chama de erro de sintaxe e diz que não consegue me entender!",
        "Você é como uma memória alocada dinamicamente, impossivél de esquecer!",
        "Se eu fosse um ponteiro, queria estar sempre apontado para você!",
        "Me chama de printf e diz que eu sou tudo que você sempre quis exibir."
    };

    // Gera um índice aleatório
    int indice = rand() % (sizeof(cantadas) / sizeof(cantadas[0]));

    // Exibe a cantada escolhida
    printf("%s\n", cantadas[indice]);
}

int main() {
    srand(time(NULL)); //Inicializa a semente do gerador de números aleatórios

    printf("Bem-Vindo ao gerador de Cantadas Nerds em C!\n");
    printf("Pressione ENTER para receber uma cantada...\n");

    while(getchar() == '\n') {
        gerar_cantada();
        printf("\nPressione ENTER para outra cantada ou Ctrl+C para sair...\n");
    }

    return 0;
}