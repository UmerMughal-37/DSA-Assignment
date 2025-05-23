
#include<iostream>
using namespace std;
struct Node{
	string expname;
	double data;
	Node* next;
	
};
class Exp_App{
     public:
     	Exp_App()
     	{
     		head=NULL;
		 }
     	int monthly=0;
     	int weekly=0;
     	string a;
	    Node* head;
	void insertExp(string detail, double amount) 
	{
		
		Node* temp=head;
		Node* newexp= new Node();
		newexp->expname= detail;
		newexp->data= amount;
		newexp->next=NULL;
		
		if(head==NULL)
		{
			head=newexp;
		}
		else
		{	
			while(temp->next!=NULL)
			{
		    	temp=temp->next;
			}
			    temp->next=newexp;
		}
		        cout<<"Your Expense has been added "<<endl;
		    }
	void ReportExp()
	{
		Node* temp=head;
		if (head==NULL)
		{
			cout<<"No expenses to view "<<endl;
		}
		else 
		{
			cout<<"Expenses are :"<<endl;
		    while(temp!=NULL)
		    {	
			cout<<temp->expname<<" "<<temp->data<<endl;
			temp= temp->next;
		}
		
    }
}
	void month_or_week( )
	{

		cout<<"Is it Monthly or Weekly "<<endl;
		cout<<"Press M for monthly OR W for weekly  "<<endl;
		cin>>a;
		if (a=="m")
		{
			monthly++;
		}
		else if(a=="w")
		{
			weekly++;
		}
		else  {
			cout<<"Not Valid"<<endl;
		}
		cout<<"Monthly expenses are :"<<monthly<<endl;
		cout<<"Weekly expenses are :"<<weekly<<endl;	
	}
		
	
};
int main()

{
	int monthly=0;
	int weekly=0;
	Exp_App E;
	double amount;
	string detail;
	int n=0;
	while(n!=3)
	{
	cout<<"1.Add an Expense "<<endl;
	cout<<"2.Details of Expense "<<endl;
	cout<<"3.Exit the program "<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>n;
	if (n==1)
	{
	cout<<"Add Expense :"<<endl;
	cin>>detail;
	cout<<"Add Amount :"<<endl;
	cin>>amount;
	E.insertExp (detail, amount);
	E.month_or_week();
	}
	else if (n==2)
	{	
	E.ReportExp();
}
    else if (n==3)
    {
    	return 0;
	}

 	else
	{
		cout<<"Invalid input "<<endl;
	}

  }
}


