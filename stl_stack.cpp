#include<bits/stdc++.h>
using namespace std;
int main(){
	// stack is LIFO (last in first out) data structure

	// declaration
	stack<int>st;

	// entering element
	st.push(1);
	st.push(7);

	// size of stack'
	cout<<st.size()<<endl;


	// output of element of stack on the screen is done only by taking it out
	// no for llop no iterator is used
	cout<<st.top()<<" "; //7
	st.pop();           //delets 7 from the stack
   cout<<st.top()<<" "; //1
 
   cout<<endl;

   // getting element of stack having lots of element 
   stack<int>st1;
   st1.push(1);
   st1.push(2);
   st1.push(45);
   st1.push(8);
   st1.push(9);
   st1.push(-1);
   st1.push(93);
   while(st1.empty() == false){  //empty is used to check if the stack container is empty or not
   	cout<<st1.top()<<" ";
   	st1.pop();
   }
 // swap all are similar as in vector
   // st1.swap(st2);

}