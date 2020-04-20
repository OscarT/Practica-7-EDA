#include "node.h"
#include <stdlib.h>
#include <stdio.h>

node *create_node(DATA data){
    node *t;
    t = (node*)malloc(sizeof(node));
    t->next = NULL;
    t->data = data;
    return t;
}

void delete_node(node *n){
    if(n->next == NULL){
        free(n);
        n= NULL;
    }
}
