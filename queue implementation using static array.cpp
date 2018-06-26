#include<iostream>
using namespace std;
# define capacity 5
int queue[capacity];
int rearIndex=-1;
int frontIndex=0;
bool isFull()
{
	if(rearIndex==capacity-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isEmpty()
{
	if(rearIndex==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void insert()
{
	int element;
	if(isFull())
	{
		cout<<"Queue is full!!\n";
	}
	else
	{
		cout<<"Enter an element.\n";
	    cin>>element;
		rearIndex++;
		queue[rearIndex]=element;
	}
}
void extract()
{
	int element;
	if(isEmpty())
	{
		cout<<"Queue is empty!!\n";
	}
	else
	{
		element=queue[frontIndex];
		cout<<element<<" is deleted from the queue!!\n";
		for(int i=0;i<=rearIndex;i++)
		{
			queue[i]=queue[i+1];
		}
		rearIndex--;
	}
}
void traverse()
{
	if(isEmpty())
	{
		cout<<"Queue is empty!!\n";
	}
	else
	{
		for(int i=0;i<=rearIndex;i++)
		{
			cout<<queue[i]<<endl;
		}
	}
}
int main()
{
	int choice;
	cout<<"1 Insert an element in the queue.\n";
	cout<<"2 Delete an element from the queue.\n";
	cout<<"3 Traverse all the elements.\n";
	cout<<"4 Exit.\n";
	while(1)
	{
		cout<<"Enter your choice.\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				extract();
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Invalid choice.\n";
				break;
		}
	}
	return 0;
}
