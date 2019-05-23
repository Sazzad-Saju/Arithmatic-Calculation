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
	cout<<setw(16)<<"Addition: "<<setw(16)<<a+b<<endl;
	cout<<setw(16)<<"Substraction: "<<setw(16)<<a-b<<endl;
	cout<<setw(16)<<"Multiplication: "<<setw(16)<<a*b<<endl;
	cout<<setw(16)<<"Division: "<<setw(16)<<a/b<<endl;
	return 0;
}
