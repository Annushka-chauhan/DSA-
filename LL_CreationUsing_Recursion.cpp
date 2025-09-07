#include <iostream>
#include <vector>
using namespace std;

//inserting at end ie tail

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

//TC O(N)
//SC O(N)
Node* CreateLinkedList(int arr[], int index, int size){
    if (index==size)
    {
        return NULL;
        /* code */
    }
    Node* temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr, index+1, size);
    return temp;
}
int main(){
    int arr[]={2,4,6,8,10};
    Node* Head;
    Head=NULL;
   //last m 2 ka address return hoga jo head m catch ho jayga
   Head= CreateLinkedList(arr,0,5);





     Node* temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}