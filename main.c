#include<stdio.h>
#include<string.h>
#include "list.h"
#include "node.h"




int main (){

    list *l;
    l = create_list();
    add(l,5,1);
    add_init(l, 5);
    add_end(l, 4);
    delete_init(l);
    delete_end(l);
    delete_data(l,3);
    search_data(l,1);
    print_list(l);

    return 0;
}
