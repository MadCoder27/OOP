/*
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program should take two operands from user and performs the operation on those two operands depending upon the operator entered by user. Use a switch statement to select the operation.
Finally, display the result.

Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/

#include<iostream>
 using namespace std;
 int main()
 {
     char a,ans;
     float n1, n2;

  do
  {
     cout << "\n\tEnter (operand1 operator operand2):  ";
     cin >> n1 >> a;

      switch(a)
      {
            case '+':
                cin >> n2;
                cout << "\n\t";
                cout << n1 <<"+"<< n2 <<"="<< n1+n2 <<"\n";
                break;

            case '-':
                cin >> n2;
                cout << "\n\t";
                cout << n1 <<"-"<< n2 <<"="<< n1-n2 <<"\n";
                break;

            case '*':
                cin >> n2;
                cout << "\n\t";
                cout << n1 <<"*"<< n2 <<"="<< n1*n2 <<"\n";
                break;

            case '/':
                cin >> n2;
                cout << "\n\t";
                cout << n1 <<"/"<< n2 <<"="<< n1/n2 <<"\n";
                break;

            default:
                cin >> n2;
                cout << "\n\t";
                cout << "\nIncorrect operator!!!";
                break;
      }

      cout<<"\nDo you want to perform other operations(y/n)?  ";
      cin>>ans;

 }while(ans=='y');

 return 0;
 }

/*
OUTPUT:
student@ubuntu:~$ g++ Pr3_Calculator.cpp -o a
student@ubuntu:~$ ./a

	Enter (operand1 operator operand2):  2+3

	2+3=5

Do you want to perform other operations(y/n)? y

	Enter (operand1 operator operand2):  2-3

	2-3=-1

Do you want to perform other operations(y/n)? y

	Enter (operand1 operator operand2):  2*3

	2*3=6

Do you want to perform other operations(y/n)? y

	Enter (operand1 operator operand2):  2/3

	2/3=0.666667

Do you want to perform other operations(y/n)? n

*/





