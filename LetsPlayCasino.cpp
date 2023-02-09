#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
void display();
void rules();
int main()
{
	bool flag=0;
display();
string name;			// SK TAUSIF RAHMAN
int amount;
char input;
cout<<"Kindly enter your name Sir/Mam :   ";
getline(cin,name);
cout<<endl;
cout<<"Enter your amount $ :   ";
cin>>amount;
cout<<endl;
do
{
rules();
//game code
int deposit;
label1:
cout<<"Enter amount you want to bet $ : ";
cin>>deposit;
cout<<endl;
if(deposit>amount)
{
	cout<<"Invalid input";
	cout<<" You do not have enough money"<<endl;
	goto label1;
}

int ball=rand()%10+1; 
int guess;
label2:
cout<<"Enter input method : "<<endl;
cout<<"Press 1 if you want to input your guessing number where ball will stop "<<endl;
cout<<"Press 2 if you think that the number where ball will stop is an even number "<<endl;
cout<<"Press 3 if you think that the number where ball will stop is an odd number "<<endl;
cout<<"Enter input :   ";
cin>>guess;
cout<<endl;
if(guess==1)
{
	int number;
	cout<<"Enter  guessing number between 1-10  :      ";
	cin>>number;
	cout<<endl;
	if(guess==ball)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
}
else if(guess==2) 
{
	if(ball%2==0)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
}
else if(guess==3)
{
	if(ball%2!=0)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}	
}
else
{
	cout<<"Invalid input "<<endl;
	goto label2;
}

if(flag==1)
{
	cout<<"********************* Congratulations !!!! You Won ***********************"<<endl;
	cout<<"You win $"<<deposit*10<<endl;
	amount=amount+deposit*10;
}
else
{
	cout<<"Sorry ";
	cout<<"You lost $"<<deposit<<endl;
   amount=amount-deposit;	
}
cout<<"Would you like to play again y/n 		:		";
cin>>input;
cout<<endl;
if(amount==0)
{
	cout<<"You do not have enough money left to play!"<<endl;
	break;
}
}while(input!='n');

cout<<name<<" , "<<" You have "<<amount<<"$"<<endl;
cout<<"\n\n************************************************************************************"<<endl;
}
void display()
{
		
string var="\n=========================================================================================="
 "\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     "
 "\n CC          A  A      SS             III     NN N   NN   OO      OO    "
 "\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    "
 "\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO   " 
 "\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO   "  
 "\n===============================================================================================\n";
 for(int i=0;i<var.size();i++)
 {
 	Sleep(10);
 	cout<<var[i];
 }
}
void rules()
{
	 system("cls");//It will clear the system of its previous inputs(Declared under conio.h header file)
	   cout << "\n\n";
      cout<<"\n\n========================================================================================\n\n";
    cout << "\t\tRULES OF THE GAME\n";
       cout<<"\n\n========================================================================================\n\n";
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
   cout<<"\n\n========================================================================================\n\n";
}