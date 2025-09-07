#include<bits/stdc++.h>
using namespace std;
//  unique keys map stores according to accending order of keys[1,2,3,4...]
// does not store multiple data whatever that is initialised at
// last will be stored
int main(){
	map<int,string>mpp;
	// mpp.insert and mpp.emplace can also be used
	 mpp[1]="abc"; //assignment
	mpp[2]="bcd";
	mpp[3]="efg";
	mpp.insert({4, "ena"});
  for(auto it:mpp){
  	cout<<it.first<<"->"<<it.second<<endl;
  }
  cout<<"to find a specific value at 4"<<endl;
   auto it1 = mpp.find(4);
   cout<<(*it1).first<<"->"<<(*it1).second<<endl;
   // if the element is not present it will return an iterator pointing to the end
   if(it1 == mpp.end()){
   	cout<<"not found"<<endl;
   }
   // lowerbound >=
   // upperbound >
   // emplace/insert is similar
   // key and value could be anything that we wish to store(a paair, a vector etc)

    cout<<endl;


   // UNORDERED MAP 


    /* stores anything in any order hence the 
    TC of finding any element is O(1 )
    when we require a fast search functinality */
cout<<"Unordered Map"<<endl;
   unordered_map<int,string>mpp1;
	mpp1[1]="abc";
	mpp1[2]="bcd";
	mpp1[3]="efg";
	mpp1.insert({4, "ena"});
  for(auto it:mpp1){
  	cout<<it.first<<"->"<<it.second<<endl;
  }


  // MULTIMAP
  /* it stores value according to the key increasing order
  not unique*/

cout<<"Multimap"<<endl;
  multimap<int,char>mpp2;
  mpp2.insert({3, 'b'});
   mpp2.insert({1, 'a'});
    mpp2.insert({2, 'b'});
     mpp2.insert({2, 'c'});
      mpp2.insert({3, 'a'});
      for(auto it : mpp2){
      	cout<<it.first<<"->"<<it.second<<endl;
      }
      cout<<"Range of 2"<<endl;
      // determing the range of element
      auto it3 = mpp2.equal_range(2); // will return a pair of iterator where first pair gives
                                      // the first place of element and second pair gives the
                                       // end place of the element

    // != in map the element are not stored in consecutive manner 
      for(auto i = it3.first; i!=it3.second; i++){
      	cout<<(*i).first<<"->"<<(*i).second<<endl;
      }

}