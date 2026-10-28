
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* a = new Node(4);   // Head
    Node* b = new Node(44);
    Node* c = new Node(54);

    // Attaching nodes
    a->next = b;
    b->next = c;

    cout << a->next->data<< endl; // Incorrect: prints an address-related error
    cout << a->next->next->data; 
}






