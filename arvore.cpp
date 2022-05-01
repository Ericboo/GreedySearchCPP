#include<stdio.h>
#include<stdlib.h>
#include"arvore.h"
#include <iostream>
#include <queue>
using namespace std;

tree* criano(int n) {
    tree* T = (tree*) malloc (sizeof(tree));
    T->key = n;
    T->l = NULL;
    T->r = NULL;
    return T;
}

tree* inserir(tree* T, int n)
{
    if (T == NULL) {
        T = criano(n);
        return T;
    }

    queue<tree*> q;
    q.push(T);
 
    while (!q.empty()) {
        tree* temp = q.front();
        q.pop();
 
        if (temp->l != NULL)
            q.push(temp->l);
        else {
            temp->l = criano(n);
            return T;
        }
 
        if (temp->r != NULL)
            q.push(temp->r);
        else {
            temp->r = criano(n);
            return T;
        }
    }
}

int buscaGulosa (tree* T, int n) {

}

void inOrder(tree* T) {
    if (T == NULL) {
      return;
    } 
    inOrder(T->l);
    printf("%d ", T->key);
    inOrder(T->r);
}