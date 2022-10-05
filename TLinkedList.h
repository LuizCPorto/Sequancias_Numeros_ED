#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include <stdbool.h>

typedef struct linked_list TLinkedList;
/**
 * Cria uma uma instância válida de TLinkedList
 * @return TLinkedList*
 * */
TLinkedList* TLinkedList_create();
void TLinkedList_destroy(TLinkedList*);
_Bool TLinkedList_insert_end(TLinkedList*, int);
void TLinkedList_print(TLinkedList*, int);
void TLinkedList_comp(TLinkedList*, int);

#endif
