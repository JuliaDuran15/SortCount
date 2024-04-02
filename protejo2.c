#define TAM 50000
#define SEED 1
#include "biblioteca.h"
#include <locale.h>

//ANOTAÇÃO IMPORTANTE CASO QUEIRA VER SÓ UMA FUNÇÃO COMENTE TIRE O COMETÁRIO DO ''GERADOR E CALCULAR TEMPO'' TAMBEM TIRE O // DO PRINT 

int main()
{
    printf("-> Tamanho Escolhido: [%d]", TAM);
    printf("\n- Seed: [%d]\n\n", SEED);
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    clock_t inicio, fim;
    Objeto *array = (Objeto*) malloc(TAM * sizeof(Objeto));

    // Insertion Sort
    // Tipo 1
    printf("- Insertion Sort:\n\tTipo 1:\n");
    GeradorDeSeed(array,TAM);
    calcularTempo(array,TAM,1);

    // Tipo 2
    printf("\n\tTipo 2:\n");
    GeradorDeSeedCrescente(array,TAM);
    calcularTempo(array,TAM,1);

    // Bubble Sort
    // Tipo 1
    printf("\n\n- Bubble Sort:\n\tTipo 1:\n");
    GeradorDeSeed(array,TAM);
    calcularTempo(array,TAM,2);

    // Tipo 2
    printf("\n\tTipo 2:\n");
    GeradorDeSeedCrescente(array,TAM);
    calcularTempo(array,TAM,2);

    // Couting Sort
    // Tipo 1
    printf("\n\n- Couting Sort:\n\tTipo 1:\n");
    GeradorDeSeed(array,TAM);
    calcularTempo(array,TAM,3);

    // Tipo 2
    printf("\n\tTipo 2:\n");
    GeradorDeSeedCrescente(array,TAM);
    calcularTempo(array,TAM,3);

    
    // Shell Sort
    // Tipo 1
    printf("\n\n- Shell Sort:\n\tTipo 1:\n");
    GeradorDeSeed(array,TAM);
    calcularTempo(array,TAM,4);

    // Tipo 2
    printf("\n\tTipo 2:\n");
    GeradorDeSeedCrescente(array,TAM);
    calcularTempo(array,TAM,4);

    // Merge Sort
    // Tipo 1
    printf("\n\n- Merge Sort:\n\tTipo 1:\n");
    GeradorDeSeed(array,TAM);
    calcularTempo(array,TAM,5);

    // Tipo 2
    printf("\n\tTipo 2:\n");
    GeradorDeSeedCrescente(array,TAM);
    calcularTempo(array,TAM,5);

    // Quick Sort
    printf("\n\n- Quick Sort:\n\tTipo 1:\n");
    // Tipo 1
            // Ordenação com pivô no limite superior
            GeradorDeSeed(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partSuperior);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite superior: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

            // Ordenação com pivô no limite inferior
            GeradorDeSeed(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partInferior);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite inferior: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

            // Ordenação com pivô no meio do subvetor
            GeradorDeSeed(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partCentral);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite meio: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

    // Tipo 2
    printf("\n\tTipo 2:\n");

            // Ordenação com pivô no limite superior
            GeradorDeSeedCrescente(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partSuperior);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite superior: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

            // Ordenação com pivô no limite inferior
            GeradorDeSeedCrescente(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partInferior);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite inferior: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

            // Ordenação com pivô no meio do subvetor
            GeradorDeSeedCrescente(array,TAM);
            inicio = clock();
            QuickSort(array, 0, TAM, partCentral);
            fim = clock();
            printf("\n\t\t- Tempo de execucao com pivo no limite meio: [%.3fs]!", (double)(fim - inicio) / CLOCKS_PER_SEC);

    if (array) {
    free(array);
    array = NULL;
    }

    
    printf("\n\n\n");
    return 0;
}