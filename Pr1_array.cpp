/*Implement a class CppArray which is identical to a one-dimensional C++ array (i.e., the index set is a set of consecutive integers starting at 0) except for the following :

1. It performs range checking.
2. It allows one to be assigned to another array through the use of the assignment
   operator (e.g. cp1= cp2)
3. It supports a function that returns the size of the array.
4. It allows the reading or printing of array through the use of cout and cin.

*/


#include<iostream>
using namespace std;

class CppArray
{
   public:
          int A[10],B[10],maxm,minm,range,sizearr,i,m;

   public:
          void getarray();
          void displayarray();
          void range_check();
          void getarray_size();
          void copy_array();
};

void CppArray :: getarray()
{
   cout<<"\nHow many nos. do you want to enter in the array?";
   cin>>m;
   cout<<"\nEnter the numbers in the array:\n";
   for(i=0;i<m;i++)
       {
          cin>>A[i];
       }
}

void CppArray :: displayarray()
{
   cout<<"\nArray A:\n";
   for(i=0;i<m;i++)
       cout<<A[i]<<"  ";
}

void CppArray :: range_check()
{
   maxm = 0;
   minm = 900;
   for(i=0;i<m;i++)
      {
         if(maxm < A[i])
            maxm = A[i];
         if(minm > A[i])
            minm = A[i];
      }

    cout<<"\n\nRange of the array is from "<<minm<<" to "<<maxm;
}

void CppArray :: getarray_size()
{
   int sizearr;
   sizearr = sizeof(A) / sizeof(A[0]);
   cout<<"\n\nSize of the array is:  "<<sizearr<<"\n";
}

void CppArray :: copy_array()
{
   for(i=0;i<m;i++)
   {
       B[i] = A[i];
   }
   cout<<"\nArray B:\n";
   for(i=0;i<m;i++)
       cout<<B[i]<<"  ";
}

int main()
{
   CppArray c;
   c.getarray();
   c.displayarray();
   c.range_check();
   c.getarray_size();
   c.copy_array();
   return 0;
}
