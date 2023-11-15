# Descrição
Este projeto implementa uma Árvore Binária de Busca (ABB) em linguagem C. A ABB é uma estrutura de dados em forma de árvore onde cada nó possui no máximo dois filhos, e a chave dos nós segue uma regra de ordenação que facilita a busca eficiente de elementos na árvore.

# Estrutura do Projeto
arvoreBinaria.h: Contém as declarações das estruturas e funções utilizadas na implementação da árvore binária.

arvoreBinaria.c: Implementa as funções declaradas em arvoreBinaria.h. Inclui as operações de inserção, remoção, busca, e percursos na árvore.

main.c: Contém o programa principal que realiza testes de todas as operações implementadas na árvore binária.

# Compilação e Execução
Para compilar o projeto, você pode utilizar um compilador C. Por exemplo:
gcc main.c arvoreBinaria.c -o arvoreBinaria

Para executar:
./arvoreBinaria

# Operações Implementadas
Inserção: struct TreeNode* inserir(struct TreeNode* raiz, int chave)

Remoção: struct TreeNode* remover(struct TreeNode* raiz, int chave)

Busca: int buscar(struct TreeNode* raiz, int chave)

Percursos na Árvore:

Em Ordem: void percorrerEmOrdem(struct TreeNode* raiz)
Pré-Ordem: void percorrerPreOrdem(struct TreeNode* raiz)
Pós-Ordem: void percorrerPosOrdem(struct TreeNode* raiz)
Mínimo e Máximo:

Mínimo: struct TreeNode* encontrarMinimo(struct TreeNode* raiz)
Máximo: struct TreeNode* encontrarMaximo(struct TreeNode* raiz)
Liberação de Memória: void liberarArvore(struct TreeNode* raiz)

#Testes
No programa principal (main.c), foram realizados testes para assegurar o correto funcionamento de todas as operações implementadas. Os testes incluem inserção de valores, remoção de nós, buscas, percursos na árvore e a verificação dos valores mínimo e máximo.
