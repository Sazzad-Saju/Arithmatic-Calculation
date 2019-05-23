#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two integer number: ";
	cin>>a>>b;
	system("cls");
	cout<<setw(12)<<"Number1"<<setw(12)<<"Number2"<<endl;
	cout<<setw(12)<<a<<setw(12)<<b<<endl<<endl;
	cout<<setw(12)<<"--------------------------------"<<endl;
	cout<<setw(26)<<"Addition: "<<setw(9)<<a+b<<endl;
	cout<<setw(30)<<"Substraction: "<<setw(5)<<a-b<<endl;
	cout<<setw(32)<<"Multiplication: "<<setw(3)<<a*b<<endl;
	cout<<setw(26)<<"Division: "<<setw(9)<<a/b<<endl;
	return 0;
}
