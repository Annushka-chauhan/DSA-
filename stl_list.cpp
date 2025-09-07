#include<bits/stdc++.h>
using namespace std;
int main(){
  /* list is the container similar to vector
     * support non-contiguous memory allocation. 
     However, they excel in insertion and deletion operations,
    which are performed in constant time once the desired position is identified
  *it has all the operations same as vector(only declaration differ) like
        -> push_back/emplace_back
        -> insert
        -> erase
        -> swap 
        -> clear etc
  *the only speciality of list is it allows to insert element at the front
   which in vector is not allowed directly rather insert operator is used 
   with condition v.insert(v.begin(),4) (that insert element 4 before first
   element of v vector)  


   Deque is also similar as vector and front operation is similar as list
   --> but the interal thing that works on list and deque is linked list
                      whereas
       in vector the underlined datastructure is array *it modifies array
                                                       *uses dynamic array                  */



	list<int>ls = {6, 9};
	ls.push_front(1);
	for(auto it : ls){
		cout<<it<<" ";
	}
       cout<<endl;

	/*A deque is a sequence container with the ability to expand and contract on both ends efficiently. 
	It supports fast insertions and deletions at both the beginning and the end, 
	making it more flexible than a vector or list in scenarios where elements are frequently
	 added or removed from both ends.*/
	 deque<int> dq = {10, 20, 30};
            dq.push_front(0);  // Insert at the beginning
            dq.push_back(40);  // Insert at the end
            for (int i : dq) {
                cout << i << " ";
            }
            return 0;
}