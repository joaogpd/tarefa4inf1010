#include <stdio.h>
#include "priorityqueue.h"

int main(void) {
    pQ* teste_pq = create_pq();
    insert_pq(teste_pq, 34, 'a');
    insert_pq(teste_pq, 12, 'b');
    insert_pq(teste_pq, 53, 't');
    
    Node* teste_node = remove_pq(teste_pq);
    print_node(teste_node);
    teste_node = remove_pq(teste_pq);
    print_node(teste_node);
    teste_node = remove_pq(teste_pq);
    print_node(teste_node);
    teste_node = remove_pq(teste_pq);
    print_node(teste_node);

    free_pq(teste_pq);

    return 0;
}