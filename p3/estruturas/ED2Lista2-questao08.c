/**
** Função : arvore binaria de busca em C
** Autor : Daniel Warella Pitsch
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da árvore
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Função para criar um novo nó da árvore
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->left = node->right = NULL;
    return node;
}

// Função para inserir um novo nó na árvore
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) return newNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
}

// Função para buscar um valor na árvore
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Função para excluir um nó da árvore
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Nó com apenas um filho ou nenhum filho
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Nó com dois filhos, encontre o nó mais à esquerda na subárvore direita
        struct Node* temp = findMin(root->right);

        // Copie o conteúdo do nó mais à esquerda para este nó
        root->data = temp->data;

        // Exclua o nó mais à esquerda
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Função para imprimir a árvore em ordem
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Árvore em ordem: ");
    inorder(root);
    printf("\n");

    int valorBuscado = 40;
    struct Node* resultadoBusca = search(root, valorBuscado);
    if (resultadoBusca != NULL)
        printf("%d encontrado na árvore.\n", valorBuscado);
    else
        printf("%d não encontrado na árvore.\n", valorBuscado);

    int valorExcluir = 30;
    root = deleteNode(root, valorExcluir);
    printf("Árvore após excluir %d: ", valorExcluir);
    inorder(root);
    printf("\n");

    return 0;
}


