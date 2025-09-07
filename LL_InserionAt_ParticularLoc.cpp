#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
  

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
     int arr[]={1,3,5,0,19};
    Node* Head;
    Head=NULL;
    Head= CreateLinkedList(arr,0,5);
    //insert at particular position 
    int x=3;//insert pos
    int value=30;
    Node* temp=Head;
    x--;
    while(x--){
        temp=temp->next;
    }
    Node *temp2 = new Node(value );
    temp2->next=temp->next;
    temp->next=temp2;


    Node* temp3;
    temp3=Head;
    while(temp3){
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }

}