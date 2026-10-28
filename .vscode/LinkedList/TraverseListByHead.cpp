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

void traverse(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
}
int main() {
    Node* a = new Node(4);   // Head
    Node* b = new Node(44);
    Node* c = new Node(54);
    Node* d = new Node(154);
    Node* e = new Node(254);
    Node* f = new Node(354);

    // Attaching nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    traverse(a);


}