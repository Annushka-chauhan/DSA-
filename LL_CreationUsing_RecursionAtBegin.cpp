#include <iostream>
#include <vector>
using namespace std;

//inserting at begin ie head
//will be printed in the decreasing order 

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size, Node* prev){
    if(index==size){
        return prev;
    }
    Node* temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr, index+1, size,temp);
}


int main(){
     int arr[]={1,3,5,0,19};
    Node* Head;
    Head=NULL;
    Head=CreateLinkedList(arr, 0, 5, NULL);
    
    Node* temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}