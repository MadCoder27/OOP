/*
Develop an object oriented program in C++ to create a database of student information system containing the following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number, driving license no. etc Construct the database with suitable member functions for initializing and destroying the data viz.
constructor,default constructor,Copy constructor,destructor,static member functions,friend class,this pointer,inline code and
dynamic memory allocation operators-new and delete.
*/

#include<iostream>
#include<cstring>
using namespace std;

class student
{
   private:
          int tno,dlic;
          char dob[10],bgrp[4];


   public:
          student()
          {
              tno=9921079469;
              dlic=4444567890;
              strcpy(dob,"6_July_2007");
              strcpy(bgrp,"A+ve");
          }

          ~student()
          {
              cout<<"\nDESTRUCTOR IS CALLED!!!";
          }

          friend class student1;
};

class student1
{
   public:
          int rno;
          int stnd;
          char name[10],div;

          student1()
          {
              rno=0;
              stnd=10;
              strcpy(name,"ABC");
              div='B';

          }

          student1(const student1 &i)
          {

              this->rno=i.rno;
              this->stnd=i.stnd;
              strcpy(this->name,i.name);
              this->div=i.div;

          }

          ~student1()
          {
              cout<<"\nDESTRUCTOR IS CALLED!!!";
          }

          inline void getdata(student &);
          inline void display(student &);

};

void student1 :: getdata(student &A)
{
      cout<<"\nEnter name:\t";
      cin>>name;
      cout<<"\nEnter roll no:\t";
      cin>>rno;
      cout<<"\nEnter class:\t";
      cin>>stnd;
      cout<<"\nEnter division:\t";
      cin>>div;
      cout<<"\nEnter date of birth:\t";
      cin>>A.dob;
      cout<<"\nEnter blood group:\t";
      cin>>A.bgrp;
      cout<<"\nEnter telephone number:\t";
      cin>>A.tno;
      cout<<"\nEnter license number:\t";
      cin>>A.dlic;
}

void student1 :: display(student &B)
{
      cout<<"\nName:\t"<<name;
      cout<<"\nRoll no:\t"<<rno;
      cout<<"\nClass:\t"<<stnd;
      cout<<"\nDivision:\t"<<div;
      cout<<"\nDate of birth:\t"<<B.dob;
      cout<<"\nBlood group:\t"<<B.bgrp;
      cout<<"\nTelephone number:\t"<<B.tno;
      cout<<"\nLicense number:\t"<<B.dlic;
}

int main()
{
      int n,i;
      cout<<"How many records do you want to create";
      cin>>n;

      student *obj1 = new student[n];
      student1 *obj = new student1[n];

      for(i=0;i<n;i++)
      {
         obj[i].getdata(obj1[i]);
      }
      for(i=0;i<n;i++)
      {
         obj[i].display(obj1[i]);
      }
             student obj2;
			 student1 obj3;

			 student obj4(obj2);
			 student1 obj5(obj3);
             cout<<"\n\nCopy Constructor is called ";

      return 0;
}
