#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

typedef struct tree {
    int key;
    struct tree* l;
    struct tree* r;
} tree;

tree* inserir (tree*, int);

int buscaGulosa (tree*, int);

void inOrder (tree*);

#endif