/*
Write a C++ program that creates an output file, writes information to it, closes the file and
open it again as an input file and read the information from the file.
*/

#include<iostream>
using namespace std;

int main()
{
   char ch;
   fstream File;
   
   file.open("Practical.txt",ios::out);           
   cout<<"\nFile created\n";
   
   file<<"New file with name 'FILE' has been created";
   
   file.close();
   
   file.open("Practical.txt",ios::in);
   
   file>>ch;
   cout<<ch;
   
   file.close();
   
   return 0;
}




























