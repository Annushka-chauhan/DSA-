#include<iostream>
using namespace std;
class Node{

	//CREATING LINKED LIST 
public:

	int data;
	Node* next;
  //create constructor to initialize values
  Node(int value){
  	data=value;
  	next=NULL;
  }
};
int main(){
	Node *Head;
	Head=new Node(4);


	cout<<Head->data<<endl;
	cout<<Head->next<<endl;
}