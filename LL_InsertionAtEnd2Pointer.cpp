#include <iostream>
#include <vector>
using namespace std;
//Using two pointers head and tail

//TC O(N)
//SC O(1)
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
int main(){
    int arr[]={2,4,6,8};
    Node* Head;
    Head=NULL;
    Node* Tail=NULL;
    //Insert at the end
    //Linked List is empty
    for(int i=0; i<4; i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }
        //Linked list exist krti h
        else {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }

    }
    Node* temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }

    
}