#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<sstream>
using namespace std;
string to_str (int a){
	string out_string;
	stringstream ss;		//convert using stringstream
	ss << a;
	out_string = ss.str();
	return out_string;
}
void sub (string str1, string str2){
	int i,j,k;
	for(i=0; i<=str2.size() ; i++){   
        for(j=0; j<=str1.size() ; j++ ){ 
            if( str2[i] == str1[j] )
            	//str1.erase(j);
                str1[j] = NULL;
        }
	}
	cout<<str1;
/*
	for(i=0; i <=str1.size()  ; i++){
        if( str1[i] != '*' )
           cout<<str1[i];
	}*/
}
int main()
{
	double a,b;
	cout<<"Enter two integer number: ";
	cin>>a>>b;
	system("cls");
	cout<<setw(12)<<"Number1"<<setw(12)<<"Number2"<<endl;
	cout<<setw(12)<<a<<setw(12)<<b<<endl<<endl;
	cout<<setw(12)<<"Arithmatic Calculation"<<endl;
	cout<<setw(12)<<"--------------------------------"<<endl;
	cout<<setw(26)<<"Addition: "<<setw(13)<<a+b<<endl;
	cout<<setw(30)<<"Substraction: "<<setw(9)<<a-b<<endl;
	cout<<setw(32)<<"Multiplication: "<<setw(7)<<a*b<<endl;
	cout<<setw(26)<<"Division: "<<setw(13)<<a/b<<endl<<endl; 
	
	cout<<setw(12)<<"String Calculation"<<endl;
	cout<<setw(12)<<"--------------------------------"<<endl;
	
	string s1 = to_str(a);
	string s2 = to_str(b);
	//cout<< s1+s2;
	cout<<setw(33)<<"String Addition: "<<setw(6)<<s1+s2<<endl;
	//cout<<"Substraction: "<<s1-s2<<endl;
	cout<<"Substraction: ";
	sub(s1,s2);						//one drawback 122-2=1 not 12
	
	return 0;
}
