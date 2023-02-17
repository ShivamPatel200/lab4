#ifndef LAB_FOUR
#define LAB_FOUR
struct node {
    int number;
    struct node * next;
    struct node * jumper;
};
struct node *build_linked_list(int elements);
void print_linked_list(struct node * list, int elements);
int delete_linked_list(struct node * list, int elements);
int sum_values_in_linked_list(struct node * list, int elements);
struct node * pointer_jumping_algo(struct node * list);
#endif