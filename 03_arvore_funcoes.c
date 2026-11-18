/*
 * Exercício 03 - Funções da Árvore Binária de Busca
 *
 * Implemente aqui as funções da árvore usadas em 03_arvore_binaria.c.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {
    /* TODO: alocar e inicializar um novo nó */
    return NULL;
}

No* inserir(No *raiz, int valor) {
    /* TODO: inserir o valor na árvore */
    return raiz;
}

void preOrdem(No *raiz) {
    /* TODO: implementar o percurso pré-ordem */
}

void emOrdem(No *raiz) {
    /* TODO: implementar o percurso em ordem */
}

void posOrdem(No *raiz) {
    /* TODO: implementar o percurso pós-ordem */
}

void emNivel(No *raiz) {
    /* TODO: implementar o percurso em nível */
}
