#include<bits/stdc++.h>
using namespace std;
int main(){
	// queue data structure is similar to stack 
	// but it has FIFO (first in first out) the element that goes first comes first

   queue<int>q;
   q.push(2);
   q.push(22);
   q.push(23);
   q.push(24);
   q.push(25);
   q.push(26);
   while(q.empty() == false){
    // the front operations provides the first element without removing it
   	cout<<q.front()<<" ";
   	q.pop();
   }
  cout<<endl;


  cout<<"Priority queue with highest element at top"<<endl;
  // it is internal data structure
  // stores the highest element at top underneath this data structure there is heap implemented
  priority_queue<int>pq;
  pq.push(5);
  pq.push(2);
  pq.push(10);
  pq.push(8); 

 // cout<<pq.top()<<" "; // first highest ie 10
 // pq.pop();
 // cout<<pq.top()<<" "; //second highest ie 8


// stores in decending order
 
while(pq.empty() == false){
    cout<<pq.top()<<" ";
    pq.pop();
}
 
 cout<<endl;

 // also stores the s mallest element at the top
cout<<"Priority queue with smallest element at top"<<endl;
priority_queue<int,vector<int>,greater<int>>pq1;

pq1.push(5);
  pq1.push(2);
  pq1.push(10);
  pq1.push(8); 

while(pq1.empty() == false){
    cout<<pq1.top()<<" ";
    pq1.pop();
}

}