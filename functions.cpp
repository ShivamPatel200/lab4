#include <iostream>
#include "lab_four.h"
using namespace std;

struct node *build_linked_list(int elements) {
    if (elements == 1) {
        struct node * start = new node;
        start->number = 0;
        start->next = start;
        start->jumper = start;
        return start;
    }
    struct node * start = new node;
    struct node * list_ptr = start;
    struct node * temp = start;
    for (int i = 0; i < elements; i++) {
        list_ptr->next = new node;
        list_ptr->number = i;
        list_ptr = list_ptr->next;
    }
    list_ptr->next = list_ptr;
    list_ptr->jumper = list_ptr;

    for (int i = 0; i < elements; i++) {
        temp->jumper = list_ptr;
        temp = temp->next;
    }
    return start;
};

void print_linked_list(struct node * list, int elements) {
    struct node * list_ptr = list;
    for(int i = 0; i < elements; i++){
        cout << list_ptr->number << " ";
        list_ptr = list_ptr->next;
    }
    cout <<endl;
}

int delete_linked_list(struct node * list, int elements){
    if (elements == 1) {
        delete list;
        return 1;
    }
    int counter = 0;
    struct node * list_ptr = list;
    struct node * temp;
    for(int i = 0; i < elements; i++){
        temp = list_ptr->next;
        delete list_ptr;
        list_ptr = temp;
        counter++;
    }
    delete list_ptr;
    return counter;
}

int sum_values_in_linked_list(struct node * list, int elements){
    int counter = 0;
    struct node * list_ptr = list;
    int temp;
    for(int i = 0; i < elements; i++){
        temp = list_ptr->number;
        counter+=temp;
        list_ptr = list_ptr->next;
    }
    return counter;
}

struct node * pointer_jumping_algo(struct node * list) {
    return list->jumper;
}

