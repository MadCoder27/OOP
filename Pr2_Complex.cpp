/*Implement a class Complex which represents the Complex Number data type. Implement the
following operations:
1. Constructor
   (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;

class Complex
{
   private:
           float real,imag;
             
   public:
          Complex()
          {
             real=0;
             imag=0;
          }
          
          Complex(float x,float y)
          {
             real=x;
             imag=y;
          }
                    
          friend Complex operator +(Complex &,Complex &);
          friend Complex operator -(Complex &,Complex &);
          friend Complex operator *(Complex &,Complex &);
          friend Complex operator /(Complex &,Complex &);
          friend ostream & operator<<(ostream &,Complex &);                  
          friend istream & operator>>(istream &,Complex &);     
                           
};

Complex operator +(Complex &b,Complex &s)
      {
          Complex c;
          c.real=s.real+b.real;
          c.imag=s.imag+b.imag;
          return c;
       }
          
Complex operator -(Complex &b,Complex &s)
      {
         Complex c;
         c.real=s.real-b.real;
         c.imag=s.imag-b.imag;
         return c;
      }
          
Complex operator *(Complex &b,Complex &s)
      {
         Complex c;
         c.real=(s.real*b.real)-(s.imag*b.imag);
         c.imag=(s.real*b.imag)+(s.imag*b.real);
         return c;
      }
          
Complex operator /(Complex &b,Complex &s)
     {
         Complex c;
         c.real=((s.real*b.real)+(s.imag*b.imag))/(s.real*b.real+s.imag*b.imag);
         c.imag=((s.imag*b.real)+(s.real*b.imag))/(s.real*b.real+s.imag*b.imag);
         return c;
     }

ostream & operator<<(ostream &op,Complex &a) 
     {
         op<<a.real<<"+"<<a.imag<<"i";
         return op;
     }
           
istream & operator>>(istream &ip,Complex &z) 
     {
         cout<<"\n\tEnter real part:";
         ip>>z.real;
         cout<<"\tEnter imaginary part:";
         ip>>z.imag;
         return ip;
     }
                    
int main()
{
   Complex c1,c2,ca,cs,cm,cd;
   char ch;
   int choice;
   cout<<"\n\tEnter first Complex Number:";
   cin>>c1;
   cout<<"\n\tEnter second Complex Number:";
   cin>>c2;

 do
 {  
         
   cout<<"\nWhich operation do you want to perform?\n";
   cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
   cin>>choice;
  
      switch(choice)
      {
          case 1:
            ca=c1+c2;
            cout<<"\tAddition is:  "<<ca<<"\n";
            break;
   
          case 2:
            cs=c1-c2;
            cout<<"\tSubtraction is:  "<<cs<<"\n";
            break;
   
          case 3:
            cm=c1*c2;
            cout<<"\tMultiplication is:  "<<cm<<"\n";
            break;
   
          case 4:
            cd=c1/c2;
            cout<<"\tDivision is:  "<<cd<<"\n";
            break;
            
          default:
            cout<<"Sorry you have entered wrong choice.";
      }
      cout<<"\nDo you want to perform other operations(Y/N)?  ";
      cin>>ch;
      
 }while(ch=='Y' && ch!='N'); 
   
   return 0;
}
