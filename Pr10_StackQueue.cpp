/*
		PRACTICAL NO :11
--------------------------------------------------------------------------- 
Write C++ program using STL for implementation of stack & queue using SLL
------------------------------------------------------------------------
*/
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	 stack <int>s;
	int no, choice;
	char decision;

do
{
	cout<<"\n *main menu* \n 1.push \n 2.pop \n 3.display \n Enter your choice!!"<<endl;
	cin>>choice;
switch(choice)
{
	case 1:
		cout<<"Enter element to push"<<endl;
		cin>>no;
		cout<<"pushed element"<<no;
		s.push(no);
	break;

	case 2:
		if(!s.empty())
		{
		
		cout<<"poped an element "<<s.top()<<endl;
			s.pop();
		}
		else
		{
		cout<<"Stack is empty!!"<<endl;
		}
	break;

	case 3:
		if(!s.empty())
		{
		cout<<"top of stack"<<s.top();
		}
		else
		{
		cout<<"stack is empty"<<endl;
		}
	break;
}
cout<<"do you want to continue?? ";
cin>>decision;

}while(decision=='y');



	 queue <int>q;
	int item, ch;
	char dec;

do
{
	cout<<"\n *main menu* \n 1.insert \n 2.delete \n 3.display rear  \n 4.display front \n5.display size\n Enter your choice!!"<<endl;
	cin>>ch;
switch(ch)
{
	case 1:
		cout<<"Enter element to insret"<<endl;
		cin>>item;
		cout<<"inserted element"<<item;
		q.push(item);
	break;

	case 2:
		item=q.front();		
		
		q.pop();
		cout<<"deleted an element "<<q.front()<<endl;
			
		
	break;

	case 3:
		cout<<"Element at rear end"<<q.back();
	
	break;
	
	case 4:
		cout<<"Element at front end"<<q.front();
	break;

	case 5:
		cout<<"size of queue"<<q.size();
	break;
}
cout<<"do you want to continue?? ";
cin>>dec;

}while(dec=='y');


return 0;
}


/*
----------------------------------output----------------------------
 *main menu* 
 1.push 
 2.pop 
 3.display 
 Enter your choice!!
1
Enter element to push
10
pushed element10
do you want to continue?? y

 *main menu* 
 1.push 
 2.pop 
 3.display 
 Enter your choice!!
1
Enter element to push
20
pushed element20
do you want to continue?? y

 *main menu* 
 1.push 
 2.pop 
 3.display 
 Enter your choice!!
1
Enter element to push
30
pushed element30
do you want to continue?? y

 *main menu* 
 1.push 
 2.pop 
 3.display 
 Enter your choice!!
2
poped an element 30
do you want to continue?? y

 *main menu* 
 1.push 
 2.pop 
 3.display 
 Enter your choice!!
3
top of stack20
do you want to continue?? n

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
1
Enter element to insret
10
inserted element10
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
1
Enter element to insret
20
inserted element20
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
1
Enter element to insret
30
inserted element30
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
2
deleted an element 10
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
3
Element at rear end30
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
4
Element at front end20
do you want to continue?? y

 *main menu* 
 1.insert 
 2.delete 
 3.display rear  
 4.display front 
5.display size
 Enter your choice!!
5
size of queue2do you want to continue?? n

*/
