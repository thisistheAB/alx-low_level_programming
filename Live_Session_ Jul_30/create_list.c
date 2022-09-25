#include <stdlib.h>

int main(){



}

struct node{
    char *name;
    int age;
    struct node *link;
};

struct node* add_item(struct node* head, int age, char *name){

    struct node *ptr = malloc(sizeof(struct node));
    ptr->name = name;
    ptr->age = age;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;

}
