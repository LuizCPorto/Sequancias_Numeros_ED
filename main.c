#include "TLinkedList.h"
#include <stdio.h>
int main(){
    int num1;
    TLinkedList* L1 = TLinkedList_create();
    scanf("%d", &num1);
    TLinkedList_comp(L1, num1);
    TLinkedList_print(L1, num1);
    
    return 0;
}
