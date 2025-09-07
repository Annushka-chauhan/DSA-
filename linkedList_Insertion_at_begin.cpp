// #include<iostream>
// using namespace std;

// //Scenerio1:
// //In this code the arr ie 2,4,6,8,10 is printed int he reverse order as we are inserting
// //the valuees at the head 
// class Node{ 

// public:

// 	int data;
// 	Node* next;

//   Node(int value){
//   	data=value;
//   	next=NULL;
//   }
// };
// int main(){

// 	int arr[]={2,4,6,8,10};
// 	//INSERT THE NODE AT BEGIN


// 	//Linked list doesnt exit
//     Node* Head;
//     Head= NULL;
// 	for(int i=0; i<5;i++){
// 	if(Head==NULL){
//        Head=new Node(arr[i]);
// 	}
// 	//linked list exist krti h
// 	else {
// 		Node* temp =new Node(arr[i]);
// 		temp->next=Head;
// 		Head=temp;
// 	}
//    }
   
//    //Print the values 

//    Node *temp=Head;
//    while(temp != NULL){
//    	cout<<temp->data<<" ";
//    	temp=temp->next;
//    };



//    //Scenerio 2 if we want to get the array as it is we have to insert the values at
//    //the tail instead of moving head we make a pointer mover that moves according to 
//    //temp Code goes as follows

//     Node* convertArr2LL(vector<int> &arr1){
//     	if(arr.empty())return nullptr;
//     	Node *Read=new Node(arr[0]);
//     	Node* mover=Read;
//     	for(int i=1; i<arr1.size();i++){
//     		Node *tempu=new Node(arr[i]);
//     		mover->next=tempu;
//     		mover=tempu;
//     	}
//        return Head;
//     }

//     void printList(Node* Read) {
//     Node* tempu = Read;
//     while (temp) {
//         cout << tempu->data << " ";
//         tempu = tempu->next;
//     }
//     cout << endl;
// }


//      vector<int> arr1={3,5,7,9,11};
//      Node *Read=convertArr2LL(arr1);
//      coutt<<"Tail Insertion"<<endl;
//      printList(Read);
//      return 0;

// }



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

// Scenario 2: Convert array to linked list using Tail Insertion
Node* convertArr2LL(vector<int> &arr1) {
    if (arr1.empty()) return nullptr;

    Node *Read = new Node(arr1[0]);
    Node* mover = Read;

    for (int i = 1; i < arr1.size(); i++) {
        Node *tempu = new Node(arr1[i]);
        mover->next = tempu;
        mover = tempu;
    }
    return Read;
}

// Print linked list
void printList(Node* Read) {
    Node* tempu = Read;
    while (tempu) {
        cout << tempu->data << " ";
        tempu = tempu->next;
    }
    cout << endl;
}

int main() {
    // Scenario 1: Head Insertion (reverse order)
    int arr[] = {2, 4, 6, 8, 10};
    Node* Head = NULL;

    for (int i = 0; i < 5; i++) {
        if (Head == NULL) {
            Head = new Node(arr[i]);
        } else {
            Node* temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    cout << "Head Insertion (reverse order): ";
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Scenario 2: Tail Insertion (same order)
    vector<int> arr1 = {3, 5, 7, 9, 11};
    Node *Read = convertArr2LL(arr1);

    cout << "Tail Insertion (same order): ";
    printList(Read);

    return 0;
}
