#include<iostream>
using namespace std;

class node{      
    public:
        int data;
        node* next;
        node(int data){
            this->data = data;
            next = NULL;
        }
        
        void PrintNext(node* t){
            cout<< endl << t->next << endl;
        }
        void Traverse(node* &);
        void insertAtHead(node* &head, int val);    
        void insertAtPos (node* &head, int val, int pos);
        void insertAtTail(node* &head, int val);
        void deleteAtHead(node* &head);
        void deleteAtPos(node* &head, int pos);
        void deleteAtTail(node* &head);

};

void node :: Traverse(node* &head){
    
    node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;
    }
}

// return-type  <class_name> :: function_name(args);
void node :: insertAtHead(node* &head,int val){
    node* newnode = new node(val);
    newnode->next = head;
    head = newnode;
} 

void node :: insertAtTail(node* &head, int val){
    node* newnode = new node(val);
    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void node :: insertAtPos(node* &head, int val, int pos){
   
    node* new_node = new node(val);
    node* temp = head;
    while(pos-1){
        temp = temp->next;
        pos--;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
 
void node :: deleteAtHead(node* &head) {
    if (head == nullptr) {
        cout << "List is already empty. Cannot delete from an empty list." << endl;
        return;
    }

    node* temp = head;
    head = head->next;
    delete temp;
}

void node :: deleteAtPos(node* &head, int pos) {
    if (head == nullptr) {
        cout << "List is already empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (pos <= 0) {
        cout << "Invalid position. Position should be a positive integer." << endl;
        return;
    }

    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position. Position exceeds the size of the list." << endl;
        return;
    }

    node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

void node :: deleteAtTail(node* &head) {
    if (head == nullptr) {
        cout << "List is already empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (head->next == nullptr) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    node* toDelete = temp->next;
    temp->next = nullptr;
    delete toDelete;
}

