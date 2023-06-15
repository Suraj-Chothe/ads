#include<iostream>
using namespace std;
class node
{
	 public:
	 int sal,mob;
	 char name[20],desg;
	 int data;
	 node *next;
	 void create();
	 void display();
	 void add_front();
	 void add_last();
	 void add_middle();
	 void del_front();
	 void del_last();
	 void del_middle();
	 
}*start;

void node::create()
{
	node *temp;
	temp=new node;
	
	
	cout<<"\nEnter  ID:";
	cin>>temp->data;
	cout<<"\nEnter  name:";
	cin>>temp->name;
	cout<<"\nEnter DESIGNA:";
	cin>>temp->desg;
	cout<<"\nEnter Mobile no:";
	cin>>temp->mob;
	cout<<"Enter Salary OF Emp:";
	cin>>temp->sal;
	
	temp->next=NULL;
	temp->next=start;
	start=temp;
}

void node::display()
{
	node *temp;
	temp=new node;
	int count=0;
	temp=start;
	if(temp==NULL)
	{
		cout<<"\n list is empty";
		
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<"(";
			cout<<temp->data<<"->";
			cout<<temp->name<<"->";
			cout<<temp->desg<<"->";
			cout<<temp->mob<<"->";
			cout<<temp->sal<<"->";
			cout<<")";
			temp=temp->next;
			count++;
		}
	cout<<"\n number of records"<<count;
	
	}
}
void node::add_front()
{
	node *temp,*ptr;
	ptr=new node;
	cout<<"\nEnter  ID:";
	cin>>ptr->data;
	cout<<"\nEnter  name:";
	cin>>ptr->name;
	cout<<"\nEnter DESIGNA:";
	cin>>ptr->desg;
	cout<<"\nEnter Mobile no:";
	cin>>ptr->mob;
	cout<<"Enter Salary OF Emp:";
	cin>>ptr->sal;
	if(temp==NULL)
	{
		temp=ptr;
	}
	else
	{
		temp = start;
		start=ptr;
		ptr->next=temp;
	}


}
void node::add_last()
{
	node *temp,*newptr;
	newptr=new node;
	cout<<"\nEnter  ID:";
	cin>>newptr->data;
	cout<<"\nEnter  name:";
	cin>>newptr->name;
	cout<<"\nEnter DESIGNA:";
	cin>>newptr->desg;
	cout<<"\nEnter Mobile no:";
	cin>>newptr->mob;
	cout<<"Enter Salary OF Emp:";
	cin>>newptr->sal;
	newptr->next=NULL;
	temp=start;
	if(temp==NULL)
	{
		temp=newptr;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next=newptr;
	}

}
void node:: del_front()
{
	node *temp;
	temp=start;
	if(temp==NULL)
	{
		cout<<"\n list is empty";
		
	}
	else
	{
		start=start->next;
		delete temp;
	}
}
void node:: del_last()
{
	node *temp,*q;
	temp=start;
	if(temp==NULL)
	{
		cout<<"\n list is empty";
		
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		q=temp->next;
		temp->next=NULL;
		delete q;
	}
}
void node::add_middle()
{
	node *temp,*ptr;
	ptr=new node;
	int loc,i;
	temp=start;
	cout<<"\n Enter the location";
	cin>>loc;
	cout<<"\nEnter  ID:";
	cin>>ptr->data;
	cout<<"\nEnter  name:";
	cin>>ptr->name;
	cout<<"\nEnter DESIGNA:";
	cin>>ptr->desg;
	cout<<"\nEnter Mobile no:";
	cin>>ptr->mob;
	cout<<"Enter Salary OF Emp:";
	cin>>ptr->sal;
	if(temp==NULL)
	{
		temp=ptr;
	}
	else
	{
		for(i=0;i<loc;i++)
		{
			temp = temp->next;
		}
		ptr->next=temp->next;
		temp->next=ptr;
	}
}
void node::del_middle()
{
	node *temp,*p;
	int loc,i;
	temp=start;
	cout<<"\n Enter the location";
	cin>>loc;
	if(temp==NULL)
	{
		cout<<"\n list is empty";
	}
	else
	{
		for(i=0;i<loc;i++)
		{
			temp = temp->next;
		}
		p=temp->next;
		temp=temp->next;
		delete p;
	}
}
int main()
{
	int ch,i;
	node n;
	start=NULL;
	do{
	cout<<"\n menu";
	cout<<"\n1 accept the data";
	cout<<"\n2  Display the data";
	cout<<"\n3 insert at front";
	cout<<"\n4 Delete at front";
	cout<<"\n5 insert at last";
	cout<<"\n6 Delete at last";
	cout<<"\n7 insert at middle";
	cout<<"\n8 Delete at middle";
	cout<<"\n9 Exit";
	cout<<"\n Enter the choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
		n.create();
		break;
		case 2:
		n.display();
		break;
		case 3:
		n.add_front();
		break;
		case 4:
		n.del_front();
		break;
		case 5:
		n.add_last();
		break;
		case 6:
		n.del_last();
		break;
		case 7:
		n.add_middle();
		break;
		case 8:
		n.del_middle();
		break;		
	}
	}while(ch!=9);
}
