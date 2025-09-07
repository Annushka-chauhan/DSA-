#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	//PRINTING OF A STRING
//     string str ="Hello";
//     string str1("Hi");
	
// 	cout<<str<<" "<<str1;


	//TAKING INPUT OF A STRING AND PRINTING IT

	
	//this only takes a single input if we provide multiple string as well like
	//hi hello here only hi is printed because any space or new line is taken as 
	//a terminating character for the cin in string, if we want the multiple string to
	//be printed we use the getline() function
	// hi 


	 // cin>>str
	//to store string with spaces   
	// getline(cin,str);
	   
   //ASCII VALUES-->

   // char ch ='a';
   // cout<<(int)ch<<endl;


  //Inbuilt functions--->

  //REVERSE reverse(ptr1,ptr2)
   string str="Hello";
   reverse(str.begin(), str.end());
   cout<<str<<endl;

   //SUBBSTRING substr(position,length)
   string str1="Anushka";
    string subStr=str1.substr(0,3);
   cout<<subStr<<endl;

	

   //THE + OPERATOR(CONCATINATION)
	string s1= "I really";
	string s2 = "love you";
	//if we want to append s1 in s2 then s1+=s2 and cout<<s1 we get our ans
	cout<<s1+" "+s2<<endl;


	//strcat()---> concatinate character  array
	char stS1[20]="Hey";
	char stS2[20]=" Listen";
	//concatinate stS1 k piche stS2
     strcat(stS1,stS2);
     cout<<stS1<<endl;
     //to get length of character array 
     cout<<strlen(stS1)<<endl;



     //PUSH_BACK() to push element at the end of the string
     char val='A';
     
     s2.push_back(val);
     cout<<s2<<endl;
     //to get length of s2
     cout<<s2.size()<<endl;
   


   //to_string() to convert numeric value to string
   int num=432;
   string df=to_string(num);
   df+="1";
   cout<<df<<endl;
  cout<<df[2]<<endl;
}