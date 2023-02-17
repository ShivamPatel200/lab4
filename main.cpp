#include <iostream>
#include "lab_four.h"
using namespace std;

int main() {
    struct node * lstOne = build_linked_list(5);
    cout << "Memory location: " << lstOne <<endl;
    struct node * temp = lstOne->jumper;
    cout << "Memory location of jumper: " << temp <<endl;
    print_linked_list(lstOne, 5);
    int sum = sum_values_in_linked_list(lstOne, 5);
    cout << "Sum: " << sum <<endl;
    cout << "Items deleted " << delete_linked_list(lstOne, 5) <<endl;
    
    return 0;
}