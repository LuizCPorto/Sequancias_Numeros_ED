#include "TLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no* prox;
}TNo;
//Headers auxiliares
TNo* TNo_createNFill(int);
TNo* TLinkedList_search(TLinkedList*, int);
void TNo_print_r(TNo*);

struct linked_list{
    TNo* inicio;
};
TLinkedList* TLinkedList_create(){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}


_Bool TLinkedList_insert_end(TLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo==NULL) return false;
    
    if(lista->inicio == NULL)
        lista->inicio = novo;
    else{
        //Procurar o elemento do fim
        TNo* aux = lista->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}

void TLinkedList_print(TLinkedList* lista, int num1){
    TNo* aux = lista->inicio;
    printf("%04d",num1);
    while(aux!=NULL){
        printf("->%d", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

void TLinkedList_comp(TLinkedList* lista, int num1){ 
    int d1,d2 ;
         while(num1 > 999){
            d1 = num1 / 100;
            d2 = (num1 % 100);

            if((d1 % 2)==0){
                d1 = d1 /2;
            }
            else
             if((d1 % 2) != 0){
                 d1 = d1 + 1;
            }
            if((d2 % 2)==0){
                d2 = d2 /2;
            }
             else
                 if((d2 % 2) != 0){
                    d2 = d2 + 1;
            }
            
            if(d2<10){
              d1 = d1 * 10;
              }
              else{
            d1 = d1 * 100;
              }
            
            num1 = d1 + d2;
            TLinkedList_insert_end(lista,num1);
            }
            while(num1 > 100 && num1 < 999){
            if((num1 % 100) < 10){
            d1 = d1 * 10;
                }
              d1 = num1 / 100;
            d2 = (num1 % 100);

            
            if((d1 % 2)==0){
            d1 = d1 /2;
            }
            else
            if((d1 % 2) != 0){
             d1 = d1 + 1;
            }
            if((d2 % 2)==0){
            d2 = d2 /2;
            }
             else
             if((d2 % 2) != 0){
            d2 = d2 + 1;
            }
            if(d2<10){
              d1 = d1 * 10;
              }
              else{
            d1 = d1 * 100;
              }
            num1 = d1 + d2;
            TLinkedList_insert_end(lista,num1);

            }
            while(num1 < 100 && num1 >9){
            if((num1 % 2)==0){
            num1 = num1 /2;
            }
            else{
            num1 = num1 + 1;
            }
            if(num1 > 9){
             TLinkedList_insert_end(lista,num1);
            }
            else{
               TLinkedList_insert_end(lista,num1); 
            }
            }
}

//Auxiliares

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
    } return novo;
}

TNo* TLinkedList_search(TLinkedList* lista, int info){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        if(aux->info == info)
            break;
        aux=aux->prox;
    }
    return aux;
}
