#include<bits/stdc++.h>
using namespace std;
int main(){
	// set is the data structure that stores only unique element
	// and in ascending order

    set<int>st;
    st.insert(1);
    st.insert(21);
    st.insert(12);
    st.insert(21);
    st.insert(211);
    st.insert(213);
    
    // check if the element is present or not(returns 1 or 0)
    cout<<st.count(21)<<endl;


    auto it = st.find(12); // itertor 
    // if 12 isnt present in the set it will return the end iterator
    // but if it is there it will print it
    if(it != st.end()){
        cout<<*it<<endl;
    }

    
    
    auto it1 = st.begin();
    it1++;


    auto it2= st.end();
    it2--;

    st.erase(it1,it2);


   for(auto it : st){
        cout<<it<<" ";
    }


  // // erase operation 
  //   st.erase(21);
  //   for(auto it: st){
  //       cout<<it<<" ";
  //   }
 
  cout<<endl;

 
    
// for loop is required to transverse in the set
   // for(auto it: st){
   // 	cout<<it<<" ";
   // }
   

   // lowerbound -> returns an iterator that points to an element
  // that is>= number given
set<int>st1;
    st1.insert(1);
    st1.insert(21);
    st1.insert(12);
    st1.insert(21);
    st1.insert(211);
    st1.insert(213);
    auto it3 = st1.lower_bound(214);
    cout<<"lowerbound element of 214 is"<<*it3;
    if(it3 == st1.end()){
        cout<<"end";
    }

    cout<<endl;

    // upperbound ->returns an iterator that points to the
    // element > given number

     auto it4=st1.upper_bound(21);
     cout<<"upper_bound element is"<<*it4;
     if(it4 == st1.end()){
        cout<<"end";
    }

cout<<endl;


// multiset datastructure -> similar to set but it can also store repeating element
    // stores all element in descending order duplicates as well
 cout<<"multiset is"<<endl;
   multiset<int>ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);
   ms.insert(2);
   ms.insert(0);
   ms.insert(21);
   ms.insert(21);

   for(auto it: ms){
    cout<<it<<" ";
   }
   cout<<endl;
   auto it5 =ms.find(1); //will point to the first 1
  auto it6 = ms.erase(1); // will erase all the one
  // to remove only one 1 ms.erase(ms.find(1));
  for(auto it6 : ms){
    cout<<it6<<" ";
  }
  cout<<endl;

  cout<<ms.count(1);  //gives all the occurances of 1


cout<<endl;
  // unordered set-> similar to set but there is no ordering 
  // stores unique element
cout<<"Unordered set is"<<endl;
  unordered_set<int>st2;
  st2.insert(1);
   st2.insert(2);
   st2.insert(1);
   st2.insert(11);
   st2.insert(11);
   st2.insert(12);
    st2.insert(12);
     st2.insert(16);
      st2.insert(19);

      for(auto it : st2){
        cout<<it<<" ";
      }
      /* lower_bound and upper_bound is not implemented here because its not sorted
      unordered set is used because it has better TC
      It provides faster search operations compared to a set due to hashing.
      eg-> auto it = st.find(11) has O(1) TC 
      preferred for set functionality*/
}
    
