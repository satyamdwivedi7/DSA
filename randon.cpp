#include <stdio.h> 
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_node(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void traverse(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void insert_at_beginning(struct Node **head_ref, int data)
{
    struct Node *new_node = create_node(data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void insert_after_node(struct Node *prev_node, int data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    struct Node *new_node = create_node(data);
    new_node->next = prev_node->next;

    prev_node->next = new_node;
}
void insert_at_end(struct Node **head_ref, int data)
{
    struct Node *new_node = create_node(data);
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    struct Node *last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}
void delete_from_beginning(struct Node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("The linked list is empty\n");

        return;
    }
    struct Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}
void delete_after_node(struct Node *prev_node)
{
    if (prev_node == NULL || prev_node->next == NULL)
    {
        printf("The given node cannot be NULL or the last node\n");
        return;
    }
    struct Node *temp = prev_node->next;
    prev_node->next = temp->next;
    free(temp);
}
void delete_from_end(struct Node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("The linked list is empty\n");
        return;
    }
    if ((*head_ref)->next == NULL)
    {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }
    struct Node *last = head_ref;
    struct Node prev = NULL;
    while (last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    free(last);
    prev->next = NULL;
}
int main()
{
    struct Node *head = NULL;
    insert_at_end(&head, 1);

    insert_at_end(&head, 2);
    insert_at_end(&head, 3);
    insert_at_beginning(&head, 0);
    insert_after_node(head->next, 4);
    printf("Linked List: ");
    traverse(head);
    delete_from_beginning(&head);
    delete_after_node(head->next);
    delete_from_end(&head);
    printf("Linked List after deletion: ");
    traverse(head);
    return 0;
}