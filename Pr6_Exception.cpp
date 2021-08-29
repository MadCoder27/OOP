/*
Create User defined exception to check the following conditions and throw the exception if the criterion does not meet.

a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune / Mumbai / Bangalore / Chennai
d. User has 4-wheeler

Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above.
If any of the condition not met then throw the exception.
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
   int age, salary;
   string city, name, vehicle;

      cout<<"\n\nEnter the age : ";
      cin>>age;

      cout<<"\nEnter the salary : ";
      cin>>salary;

      cout<<"\nDo you have a 4-wheeler?(Y/N) ";
      cin.ignore();
      getline(cin,vehicle);

      cout<<"\nEnter the name of the user : ";
      getline(cin,name);

      cout<<"\nEnter the city of the user : ";
      getline(cin,city);

      cout<<"\n\tName of the user is : "<<name;


   try
   {
      if(age>18 && age<55)
         cout<<"\n\tAge of the user is "<<age<<" years.";
      else
         throw "   Wrong age input...!!!";
   }
   catch(char const* excp)
   {
      cout<<"\n\n\tInvalid data entered..."<<excp<<"\n";
   }


   try
   {
      if(salary>=50000 && salary<=100000)
         cout<<"\n\tSalary of the user is Rs."<<salary<<" per month.";
      else
      {
         throw "   Income is not between Rs.50,000 – Rs.1,00,000 per month...!!!";
      }
   }
   catch(char const* excp)
   {
      cout<<"\n\n\tInvalid data entered..."<<excp<<"\n";
   }


   try
   {
      if(vehicle == "Y")
         cout<<"\n\tThe user has a 4-wheeler";
      else
      {
         throw "User does not have a 4-wheeler...!!!";
      }
   }
   catch(char const* excp)
   {
      cout<<"\n\n\tInvalid data entered..."<<excp<<"\n";
   }


   try
   {
      if(city == "Pune" || city == "Mumbai" || city == "Bangalore" || city == "Chennai")
         cout<<"\n\tThe user lives in "<<city;
      else
      {
         throw "   Wrong city...!!!";
      }
   }
   catch(char const* excp)
   {
      cout<<"\n\n\tInvalid data entered..."<<excp;
   }


   cout<<"\n\n";
   return 0;
}

/*
student@ubuntu:~$ g++ Pr6_Exception3.cpp -o a
student@ubuntu:~$ ./a

Enter the age : 17

Enter the salary : 70000

Do you have a 4-wheeler?(Y/N) Y

Enter the name of the user : Tanvi Nirmal

Enter the city of the user : Pune

	Name of the user is : Tanvi Nirmal

	Invalid data entered...   Wrong age input...!!!

	Salary of the user is Rs.70000 per month.
	The user has a 4-wheeler.
	The user lives in Pune.
*/


