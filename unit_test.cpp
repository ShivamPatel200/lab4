#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "lab_four.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing my linkedlist functions") {
    SUBCASE("lst1"){
        struct node * lst1 = build_linked_list(4);
        struct node * list_ptr = lst1;
        for(int i = 0; i < 4; i++){
            CHECK(list_ptr->number == i);
            list_ptr = list_ptr->next;
        }
        CHECK(sum_values_in_linked_list(lst1, 4) == 6);
        CHECK(delete_linked_list(lst1, 4) == 4);
    }
    SUBCASE("lst2"){
        struct node * lst2 = build_linked_list(8);
        CHECK(sum_values_in_linked_list(lst2, 8) == 28);
        struct node * temp = lst2;
        struct node * list_ptr = lst2;
        for(int i = 0; i < 8; i++){
            CHECK(list_ptr->number == i);
            list_ptr = list_ptr->next;
        }
        for(int i = 0; i < 8; i++){
            CHECK(temp->jumper == list_ptr);
            temp = temp->next;
        }
        CHECK(delete_linked_list(lst2, 8) == 8);

    }
    SUBCASE("lst3"){
        struct node * lst3 = build_linked_list(10);
        CHECK(sum_values_in_linked_list(lst3, 10) == 45);
        struct node * temp = lst3;
        struct node * list_ptr = lst3;
        for(int i = 0; i < 10; i++){
            CHECK(list_ptr->number == i);
            list_ptr = list_ptr->next;
        }
        for(int i = 0; i < 10; i++){
            CHECK(pointer_jumping_algo(temp) == list_ptr);
            temp = temp->next;
        }
        CHECK(delete_linked_list(lst3, 10) == 10);
        
    }
    SUBCASE("lst4"){
        struct node * lst4 = build_linked_list(1);
        CHECK(lst4->number == 0);
        CHECK(lst4->next == lst4);
        CHECK(lst4->jumper == lst4);
        CHECK(delete_linked_list(lst4, 1) == 1);
    }

}
