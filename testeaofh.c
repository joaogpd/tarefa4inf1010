#include <stdio.h>
#include "arrayoc.h"
#include "filehandler.h"


int main(void) {
    arrayOc* teste_ao = build_arrayOc("input.txt", "r");
    print_arrayOc(teste_ao);

    free_arrayOc(teste_ao);

    return 0;
}