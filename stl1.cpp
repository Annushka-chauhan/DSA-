#include <bits/stdc++.h>

using namespace std;
void explainVector(){
	vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
   
    
    // vector<int>dupvec(v); creates a duplicate vector of v;

    cout<<*v.begin()<<" ";

    // the v.end() points to one element after the last element
    cout<<*v.end()<<" "<<endl;

    cout<<"Front element"<<v.front()<<endl;
    cout<<"back element"<<v.back()<<endl;

    cout<<" the elements inside the vector container is"<<" ";
     
    for(auto it: v){
    	cout<<it<<" ";
    }
    cout<<endl;
     // swap operation 
    cout<<"swap of two vectors is ";
    vector<int>v1 = {2,4};
    vector<int>v2 = {3,5};
    swap(v1,v2);
    for(auto it: v1){
    	cout<<it<<" ";
    }


  cout<<endl;
    // v.insert-->inserts a copy of value before position
  cout<<"element inserted ";
  //  v.insert(location of element, the element to be inserted)
	v.insert(v.begin()+1, 23);
	for(auto it: v){
		cout<<it<<" ";
	}

//   after erasing the range of elements from 1 to 4
	// v.erase(starting index range, next to the last index )
  //the v.end range is after the place that we want to remove 
	 v.erase(v.begin()+1,v.end()-1);
    cout<<"elemet after erasing";
	for(auto it: v) {
		cout << it << " ";
		 }
		  
	cout << endl;
}
int main() {
	explainVector();
}