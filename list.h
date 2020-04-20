#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <stdbool.h>

typedef struct _list list;

struct _list
{
    node *head;
    int num;
};

list* create_list();
void delete_list(list *l);

// Funciones para agregar a la lista
bool add_init(list *l, DATA data);
bool add_end(list *l, DATA data);
bool add(list *l, DATA data, int pos);

// Función para eliminar un dato
bool remove_data(list *l, DATA data);

// Funciones para eliminar por posición
DATA delete_init(list *l);
DATA delete_end(list *l);
DATA delete_data(list*l,int pos);

// Funciones para buscar
int search_data(list *l, DATA data);
DATA search_pos(list *l, int pos);
node *serch_node(list *l, DATA data);

//Ultimo y penultimo 
node *ultimo(list *l);
node *penultimo(list *l);
node *anterior(list *l, int pos);
node *actual(list *l, int pos);

//funcion para imprimir
void print_list(list *l);

bool is_empty(list *l);
void empty(list *l);

#endif
