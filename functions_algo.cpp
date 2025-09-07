
#include <bits/stdc++.h>
using namespace std;

// reverse 
// tells true if el1 is after el2
// tells false if el1 is before el2
bool internalcomparator(int el1, int el2){
	if(el1<el2)return false;
	return true;
}

int main() {
	cout<<"Sorting in array"<<endl;
	int arr[5]={1,6,8,3,2,};
	//  sort(first , the element after last last element of range)
	sort(arr, arr+5);
	for(int i=0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Sorting in vector";
    vector<int> v = {3, 1, 4, 1, 5, 9};
    sort(v.begin(), v.end());
    for(auto it : v) {
        cout << it<< " ";
    }

    cout<<endl;
    cout<<"Accumulate algo"<<endl;
    // obtain sum 
    int arr1[5]= {1,3,5,3,7};
    // accumulate(first, 1 after last or last element of range, initial sum)
    cout<<accumulate(arr1, arr1+5, 0)<<endl;



    
    cout<<"count algo"<<endl;
    // determine how many time the element appearr
    int arr2[5]= {2,6,1,1,0};
    int num =1;
    cout<<count(arr2, arr2+5, num);
     
     cout<<endl;

    cout<<"Find algo"<<endl;
    int arr3[5]={6,2,1,2,8};
    auto it1 = find(arr3, arr3+5, 9);
    cout<<*it1<<endl;
    // if not found
    if(it1 == (arr+5)){
    	cout<<"not found";
    }

    cout<<endl;

    cout<<"Next permutation algo"<<endl;
    // prints permutation in a sorted order
   // works on array vector string etc
    string str = "abc";
    do{
    cout<<str<<endl;
    // can also permute to a part or specific range like (str.begin(), str.begin()+2) a and b permutation
    }while(next_permutation(str.begin(), str.end()));



cout<<endl;

    cout<<"previous permutation algo"<<endl;

     string str1 = "cab";
    do{
    cout<<str1<<endl;
    // can also permute to a part or specific range like (str.begin(), str.begin()+2) a and b permutation
    }while(prev_permutation(str1.begin(), str1.end()));


    cout<<endl;

    cout<<"Max element"<<endl;
    int brr[5]= {10, 9, 1, 23, 73};
    auto it2 = max_element(brr, brr+5);
     // similarly can be done to get min element min_element
    cout<<*it2<<" ";



    cout<<endl;
    cout<<"reverse"<<endl;
    reverse(brr, brr+5);
    for(int i=0; i<5; i++){
    	cout<<brr[i]<<" ";
    }

     cout<<endl;
     cout<<"Comparator";\
     /* el1 is 5 
     el2 is 6'
     internal comparator that takes el1 and el2
     and tells you if el1 should be before el2 or not*/

     int crr[5]={5, 6, 1, 2, 4};
     sort(arr, arr+5, internalcomparator);
     for(int i=0; i<5; i++){
     	cout<<crr[i]<<" ";
     }


 }