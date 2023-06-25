#include <iostream>

using namespace std;

class node {
    public :
        int value;
        node* next; 
};

int main(){

    node *head;
    node *first = new node();
    node *second = new node();
    node *third = new node();
    
    first -> value = 1;
    second -> value = 2;
    third -> value = 3;
    
    first  -> next = second;
    second -> next = third;
    third -> next = NULL;

    head = first;

    while(head!=NULL){
        cout << head -> value<< " -> ";
        head = head -> next;
    }
    
    cout<< "NULL";
}