/*
Create a class template to represent a generic vector. Include following member functions:
1 To create the vector.
2 To modify the value of a given element
3 To multiply by a scalar value
4 To display the vector in the form (10,20,30,...)
*/

#include<iostream>
#include<vector>
using namespace std;


int main()
{
   int n,val=0,ele,i,a;
   vector<int>v;
   
   cout<<"\nEnter the size of the array you want to create :  ";
   cin>>n;
   
   cout<<"\nEnter "<<n<<" number of elements.\n";
   
   for(int i=0; i<n; i++)
   {
      cin>>val;
      v.push_back(val);
   }
   
   cout<<"\nThe "<<n<<" elements in the vector are: \n";
   
   for(int i=0; i<n; i++)
   { 
      cout<<v[i]<<" ";
   }
   cout<<"\n";  
   
   cout<<"\nEnter the element to be replaced in position of the old element : ";
   cin>>ele;
   
   cout<<"Enter the position of the old element : ";
   cin>>i;
   
   v.erase (v.begin()+i);
   v.insert(v.begin()+i, ele);
   
   cout<<"\nThe "<<n<<" elements in the vector are: \n";
   
   for(int i=0; i<n; i++)
   { 
      cout<<v[i]<<" ";
   }
   cout<<"\n"; 
   
   cout<<"\nEnter the scalar value to be multiplied : ";
   cin>>a;
   
   for(int i=0; i<n; i++)
   {
      ele = v[i] * a;
      v.erase (v.begin()+i);
      v.insert(v.begin()+i, ele);     
   }
   
   cout<<"\nAfter multiplying with "<<a<<" the "<<n<<" elements in the vector are: \n";
   
   for(int i=0; i<n; i++)
   { 
      cout<<v[i]<<" ";
   }
   cout<<"\n\n";
   
   return 0;
}







