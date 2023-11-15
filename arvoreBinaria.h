#include <stddef.h>

struct TreeNode {
    int chave;
    struct TreeNode* esquerda;
    struct TreeNode* direita;
};

struct TreeNode* criarNo(int chave);
struct TreeNode* inserir(struct TreeNode* raiz, int chave);
struct TreeNode* remover(struct TreeNode* raiz, int chave);
int buscar(struct TreeNode* raiz, int chave);
void percorrerEmOrdem(struct TreeNode* raiz);
void percorrerPreOrdem(struct TreeNode* raiz);
void percorrerPosOrdem(struct TreeNode* raiz);
struct TreeNode* encontrarMinimo(struct TreeNode* raiz);
struct TreeNode* encontrarMaximo(struct TreeNode* raiz);
void liberarArvore(struct TreeNode* raiz);

