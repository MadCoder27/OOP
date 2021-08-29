/*
		practical no -10
-----------------------------------------------------------------------------------
Write a menu driven program that will create a data file containing the list of telephone
numbers in the following form
John 23456
Ahmed 9876
........... .........
Use a class object to store each set of data, access the file created and implement the following
tasks
I.
Determine the telephone number of specified person
II.
Determine the name if telephone number is known
III.
Update the telephone number, whenever there is a change.
-----------------------------------------------------------------------------------
*/
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>

using namespace std;

class person
{
   public:
    		char name[10];
    		int phno;
    
    		void input_data()
    		{ 
      		cout<<"\n Enter Name:-";
      		cin>>name;
      		cout<<"\n Enter Phone no:-";
      		cin>>phno;
       		}
     
    		void put_data()
    		{ 
     		cout<<setw(10)<<name<<setw(10)<<phno<<endl;
       		}
 };


int main()
{
   	person rec;
   	int phone,pos,choice,offset,i;
   	fstream fp;
   	ifstream in;
   	ofstream out;
   	char nm[20];
   	char ans='y';
   
   	do
   	{
     		cout<<"\n Main Menu ";
     		cout<<"\n 1. Read File ";
     		cout<<"\n 2. Write File ";
     		cout<<"\n 3. Determine Name if Telephone number is specified ";
     		cout<<"\n 4. Determine Telephone number if Name is specified ";
     		cout<<"\n 5. Update Telephone no.";
     		cout<<"\n Enter ur choice: ";
     		cin>>choice;

    	switch(choice)
    	{
      		case 1:
        		in.open("Home:\\test1.txt",ios::in);
			cout<<"\nThe contents of file are....\n";
        		while(in.read((char*)&rec,sizeof(rec)))
        		{
          		rec.put_data();
            		}
        		in.close();
       			 break;

       		case 2:
        		rec.input_data();
         		out.open("Home:\\test1.txt",ios::out|ios::app|ios::binary);
        		out.write((char*)&rec,sizeof(rec));
        		out.close();
        		break;
     
      		case 3:
        		cout<<"\n Enter the phone no.";
        		cin>>phone;
        		fp.open("Home:\\test1.txt",ios::ate|ios::in|ios::out|ios::binary);
        		fp.seekg(0,ios::beg);
        		pos=-1;
        		i=0;
        

        		while(fp.read((char*)&rec,sizeof(rec)))
        		{
         			if(phone==rec.phno)
          			{
           			 pos=i;
           			 break;
            			}
           			i++;
          		}
       			offset=pos*sizeof(rec);
       			fp.seekp(offset);          //seeking the desired record for Deletion
       			fp.read((char*)&rec,sizeof(rec));
       			cout<<"\n Name: "<<rec.name;
       			fp.close();
       			break;

     		case 4:
       			cout<<"\n Enter the Name:";
       			cin>>nm;
       			fp.open("Home:\\test1.txt",ios::ate|ios::in|ios::out|ios::binary);
       			fp.seekg(0,ios::beg);
      			pos=-1;
       			i=0;
       			while(fp.read((char*)&rec,sizeof(rec)))
        		{
          			if((strcmp(nm,rec.name))==0)
           			{
             			pos=i;
             			break;
            			}
          			i++;
         		}     
    			offset=pos*sizeof(rec);
    			fp.seekp(offset);    //Seeking the desired record for deletion
    			fp.read((char*)&rec,sizeof(rec));
    			cout<<"\n Telephone Number: "<<rec.phno;
    			fp.close();
    			break;

     		case 5:
       				cout<<"\n Enter the name: ";
       				cin>>nm;
       				fp.open("Home:\\test1.txt",ios::ate|ios::in|ios::out|ios::binary);
       				fp.seekg(0,ios::beg);
       				pos=-1;
       				i=0;
       
         			while(fp.read((char*)&rec,sizeof(rec)))
          			{
              				if((strcmp(nm,rec.name))==0)
               				{
                 			pos=i;
                 			break;
					}
                    		
               			i++;
               			}
      				offset=(pos)*sizeof(rec);
      				fp.seekp(offset);
      				cout<<"\n Current Phone: "<<rec.phno;
      				cout<<"\n Enter new Telephone no.: ";
      				cin>>phone;
      				rec.phno = phone;
      				fp.write((char*)&rec,sizeof(rec))<<flush;
      				cout<<"\n Record updated!!!\n";
      				fp.seekg(0);
      

      				while(fp.read((char*)&rec,sizeof(rec)))
       				{ 
           			rec.put_data();
			        }
       				fp.close();
       				break;
	}
		cout<<"\n Do u want to continue?(y/n)";
      		cin>>ans;
   	}while(ans=='y');
	return 0;
}

/*_____________________________OUTPUT____________________________

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 2

 Enter Name:-harshada

 Enter Phone no:-908

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 2

 Enter Name:-nikita

 Enter Phone no:-658

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 2

 Enter Name:-ifgh

 Enter Phone no:-7654

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 2

 Enter Name:damini

 Enter Phone no:-8976

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 1

The contents of file are....
  harshada      1234
    nikita      5678
     ifgh      7654
     damini      8976

 Do u want to continue?(y/n)y   

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 3

 Enter the phone no.1234

 Name: harshada
 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 4

 Enter the Name:nikita

 Telephone Number: 5678
 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 5

 Enter the name: ifgh

 Current Phone: 7654
 Enter new Telephone no.: 8754

 Record updated!!!

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 2

 Enter Name:-vru

 Enter Phone no:-8765

 Do u want to continue?(y/n)y

 Main Menu 
 1. Read File 
 2. Write File 
 3. Determine Name if Telephone number is specified 
 4. Determine Telephone number if Name is specified 
 5. Update Telephone no.
 Enter ur choice: 1

The contents of file are....
  vrushali      1234
    nikita      5678
     ifgh      7654
     damini     8976
       

 Do u want to continue?(y/n)n
student@ubuntu:~$ 

/*

































