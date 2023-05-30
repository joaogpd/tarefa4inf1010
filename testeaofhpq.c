#include <stdio.h>
#include "priorityqueue.h"
#include "arrayoc.h"
#include "filehandler.h"


int main(void) {
    arrayOc* teste_ao = build_arrayOc("input.txt", "r");
    print_arrayOc(teste_ao);

    pQ* teste_pq = convert_ao_pq(teste_ao);
    free_arrayOc(teste_ao);
    print_pq(teste_pq);

    pq_to_bt(teste_pq);

    cdDict** new_cddictarray = percurso_head(teste_pq);

    print_cdDict(new_cddictarray);

    print_head(teste_pq);
    printf("\n");

    print_binary("input.txt", new_cddictarray);

    free_head(teste_pq);
    free_cdDict(new_cddictarray);
    return 0;
}