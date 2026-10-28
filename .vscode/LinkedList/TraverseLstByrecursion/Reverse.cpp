#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void print(Node* head){
    if (head == NULL) return;
    print(head->next);
    cout<< head->data << " ";
    
}
int main(){
    Node* a = new Node(33);
    Node* b = new Node(45);
    Node* c = new Node(456);
    Node* d = new Node(567);
    Node* e = new Node(888);

    //attach 
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print(a);
}




