#include<iostream>
using namespace std;

int main(){
	cout<<" calculater created."<<endl;
	cout<<"**********CALCULATOR*********"<<endl;
	int x,y,z;
	cout<<"Enter  first number"<<endl;
	cin>>x;
	cout<<"Enter  second number"<<endl;
	cin>>y;
	char c;
	cout<<"Select any operation(+,-,*,/)"<<endl;
	cin>>z;
	switch(z){
		case '+' :
			cout<<"Addition is: ";
			cout<<x+y;
			break;
		case '-' :
			cout<<"Substraction is: ";
			cout<<x-y;
			break;
		case '*' :
			cout<<"Multiplication is: ";
			cout<<x*y;
			break;
		case '/' :
			cout<<"Division is: "; 
			cout<<x/y;
			break;
	}
	return 0;
}
