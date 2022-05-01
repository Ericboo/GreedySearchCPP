#include<stdio.h>
#include"arvore.h"
#include"arvore.cpp"
using namespace std;

int main () {
    tree* T = NULL;
    while (2) {
        int val;
        scanf("%d", &val);
        if (val == -1) {
            break;
        }
        T = inserir(T, val);
    }
    inOrder(T);
}