#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
void addatend(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
struct node *start(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    ptr->link = head;
    head = ptr;
    return head;
}
// void pos(struct node *head, int data, int position)
// {
//     struct node *ptr = head;
//     struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->link = NULL;

//     position--;
//     while (position != 1)
//     {
//         ptr = ptr->link;
//         position--;
//     }
//     ptr2->link = ptr->link;
//     ptr->link = ptr2;
// }
struct node *del_first(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 90;
    ptr->link = NULL;
    head->link = ptr;

    // pos(head, 99, 3);
    // ptr = head;

    addatend(head, 67);
    head = start(head, 100);
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }

    head = del_first(head);
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}