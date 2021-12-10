//// linked list with 3 nodes
//
#include "list.h"
//int main() {
//    struct Node* head = NULL;
//    struct Node* second = NULL;
//    struct Node* third = NULL;
//
//
//    // create 3 nodes in heap
//    head = (struct Node*) malloc(sizeof (struct Node));
//    printf("data in the head node before init = %d",head);
//    second = (struct Node*) malloc(sizeof (struct Node));
//    third = (struct Node*) malloc(sizeof (struct Node));
//
//
//    //  fill the nodes with data
//    head->data = 5;
//    printf("data in the head node after init = %d",head);
//    head->next = second;
//
//    second->data = 6;
//    second->next = third;
//
//    third->data = 9;
//    third->next = NULL;
//
//    return 0;
//}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}