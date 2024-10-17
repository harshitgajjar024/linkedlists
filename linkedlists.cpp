#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int num){
        data=num;
        next=NULL;
    }
};

int main(){
    Node* L1=new Node(6);
    cout<<L1->data<<"   "<<L1->next;
    return 0;
}

/*
6   0
*/