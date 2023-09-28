/**
** Fun��o : arvore binaria de busca em C
** Autor : Daniel Warella Pitsch
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura do n� da �rvore
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Fun��o para criar um novo n� da �rvore
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->left = node->right = NULL;
    return node;
}

// Fun��o para inserir um novo n� na �rvore
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) return newNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
}

// Fun��o para buscar um valor na �rvore
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Fun��o para excluir um n� da �rvore
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // N� com apenas um filho ou nenhum filho
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // N� com dois filhos, encontre o n� mais � esquerda na sub�rvore direita
        struct Node* temp = findMin(root->right);

        // Copie o conte�do do n� mais � esquerda para este n�
        root->data = temp->data;

        // Exclua o n� mais � esquerda
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Fun��o para imprimir a �rvore em ordem
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

    printf("�rvore em ordem: ");
    inorder(root);
    printf("\n");

    int valorBuscado = 40;
    struct Node* resultadoBusca = search(root, valorBuscado);
    if (resultadoBusca != NULL)
        printf("%d encontrado na �rvore.\n", valorBuscado);
    else
        printf("%d n�o encontrado na �rvore.\n", valorBuscado);

    int valorExcluir = 30;
    root = deleteNode(root, valorExcluir);
    printf("�rvore ap�s excluir %d: ", valorExcluir);
    inorder(root);
    printf("\n");

    return 0;
}


