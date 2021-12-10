//
// Created by obigvee on 10/12/2021.
//

#ifndef LINKEDLIST_LIST_H
#define LINKEDLIST_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int data;
    struct Node* next;
};

/**
* struct list_s - singly linked list
* @str: string - (malloced string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/

typedef struct  list_s{
    char *str;
    unsigned  int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif //LINKEDLIST_LIST_H
