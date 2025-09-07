#include <iostream>
#include <vector>
using namespace std;
//Using one pointer head and traversing to the end 
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
    int arr[]={1,2,6,8};
    Node* Head;
    Head=NULL;
    //Insert at the end
    //Linked List is empty
    for(int i=0; i<4; i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
        }
        //Linked list exist krti h
        else {
            Node *tail=Head;
            while(tail->next !=NULL){
                tail=tail->next;
            }
            Node *temp=new Node(arr[i]);
            tail->next =temp;
        }

    }
    Node* temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    
}