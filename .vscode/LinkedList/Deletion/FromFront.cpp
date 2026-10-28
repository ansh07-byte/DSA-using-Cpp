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
private:
    Node* head;
    Node* tail;
    int size;
public:
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
    void InsertAthead(int value){
    Node* n = new Node(value);
    if(size == 0) head = tail = n;
    else{
        n->next = head;
        head = n;  
    }
    size++;
} 
    void removehead(){
        head = head->next;
        size--;

    }
    int length(){  // getter
        return size;
    } 
};
int main(){

    LinkedList l;
    l.InsertAthead(23);
    l.InsertAthead(33);
    l.InsertAthead(43);
    l.removehead();
    l.display();
    cout<< l.length();  // access private element
}
