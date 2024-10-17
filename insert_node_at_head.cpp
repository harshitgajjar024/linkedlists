#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int num) {
        data = num;
        next = NULL;
    }
};

void insertHead(Node*& head, int newData) { 
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode; 
}

void Disp(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL; 
    insertHead(head, 10);
    insertHead(head, 20); 
    insertHead(head, 30);
    Disp(head); 
    return 0;
}

/*
30->20->10->NULL
*/