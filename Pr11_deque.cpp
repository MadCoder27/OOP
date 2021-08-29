/*
		practical no - 12
----------------------------------------------------------------
write a c++ programm for dequeue using stl.
----------------------------------------------------------------
*/
#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{

int no, ch;
char ans;
deque<int>dq;
deque<int> :: iterator i;

do
{
	cout<<"\n\t\t**main menu**\n1.insert from front\n2.insert from rear\n3.delete from rear\n4.delete from front\n5.display 	deque\n6.display size of deque\nEnter your choice:";

	cin>>ch;
	switch(ch)

	{
		case 1:
			cout<<"\n\tEnter element"<<endl;
			cin>>no;
			dq.push_front(no);
			cout<<"inserted element"<<no;
		break;

		case 2:
			cout<<"\n\tEnter element"<<endl;
			cin>>no;
			dq.push_back(no);
			cout<<"\ninsreted element"<<no;

		break;

		case 3:
			if(!dq.empty())
			{
			no = dq.back();
			dq.pop_back();
			cout<<"Deleted element"<<no;
			}
			else
			{
			cout<<"\ndeque is empty";
			}
 
		break;

		case 4:
			if(!dq.empty())
			{
			no = dq.front();
			dq.pop_front();
			cout<<"deleted element"<<no;
			}
			else
			{
			cout<<"\ndeque is empty";
			}
		break;

		case 5:
			if(!dq.empty())
			{
				for(i=dq.begin(); i!=dq.end(); i++)
				{
				cout<<*i<<" ";
				}
			}
			else
			{
			cout<<"\ndeque is empty";
			}
			break;			

		case 6:
			if(!dq.empty())
			{
			cout<<"\nSize of deque :"<<dq.size();
			}
 
			else
			cout<<"\nDeque is empty..";
			break;
	}
cout<<"\nDo you want to cotinue(y/n)"<<endl;
cin>>ans;

}while(ans=='y');     

return 0;
}
/*
------------------------------output-------------------------------------
		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:1

	Enter element
10
inserted element10
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:1

	Enter element
20
inserted element20
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:2

	Enter element
30

insreted element30
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:2

	Enter element
40

insreted element40
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:3
Deleted element40
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:4
deleted element20
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:5
10 30 
Do you want to cotinue(y/n)
y

		**main menu**
1.insert from front
2.insert from rear
3.delete from rear
4.delete from front
5.display 	deque
6.display size of deque
Enter your choice:6

Size of deque :2
Do you want to cotinue(y/n)
n
*/ 










