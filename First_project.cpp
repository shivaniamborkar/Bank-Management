#include<iostream>
#include<stdio.h>
using namespace std;

class Bank
{
	char name[100],add[100],y[2];
	int balance;
	public:
	       void open_account();
               void deposite_money();
	       void withdraw_money();
	       void display_account();             
};

void Bank :: open_account()
{
	cout<<"enter your full name :";
	cin>>name;
	cout<<"enter your address :";
	cin>>add;
	cout<<"what type of acount you want to open saving(s) or current(c) :";
	cin>>y;
	cout<<"enter your amount for deposite :";
	cin>>balance;
	cout<<"Your account is created\n";
}

void Bank :: deposite_money()
{       
	int a;
	cout<<"Enter how much you deposite?";
	cin>>a;
	balance+=a;
	cout<<"Total amount you deposite : "<<balance<<"\n";
}

void Bank :: withdraw_money()
{
	float amount;
	cout<<"\nwithdraw : ";
	cout<<"Enter amount to withdraw : ";
	cin>>amount;
	balance-=amount;
	cout<<"Total amount is left : "<<balance<<"\n";
}

void Bank :: display_account()
{
	cout<<"Your full name : "<<name<<"\n";
	cout<<"Your address : "<<add<<"\n";
	cout<<"type of account that you open : "<<y<<"\n";
	cout<<"amount you deposite : "<<balance<<"\n";

}

int main()
{
	int ch,x;
	Bank obj;
	do
	{
	cout<<"1) Open account \n";
	cout<<"2) deposite money \n";
	cout<<"3) withdraw money \n";
	cout<<"4) display account \n";
	cout<<"5) Exit \n";
	cout<<"Select the options from above \n";
	cin>> ch;
	switch(ch)
	{
		case 1: cout<< "1) open account \n";
		obj.open_account();
		break;
		case 2: cout<< "2) deposite money \n";
		obj.deposite_money();
		break;
		case 3: cout<<"3) withdraw money \n";
		obj.withdraw_money();
		break;
		case 4: cout<<"4) display account \n";
		obj.display_account();
		break;
		default:
			cout<<"this is not exist try again \n";
	}
	}while(ch!=4);
	
	
        return 0;

}

