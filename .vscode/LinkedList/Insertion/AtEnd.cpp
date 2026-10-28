#include <iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
    int length;
    Node(int value){
        data = value;
        next = nullptr;
    }

};
struct LinkedList{
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = nullptr;
        size = 0;
    }
    void display(){
        Node* temp = head;
        while (temp != NULL){
            cout<< temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void InsertAtEnd(int value){
        Node* n = new Node(value);
        if(size == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        size++;
    }   
};
int main(){
    LinkedList l;
    l.InsertAtEnd(22);
    l.InsertAtEnd(23);
    l.InsertAtEnd(24);
    l.display();
}
