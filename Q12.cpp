#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter values of a, b and c repectively: ";
	cin>>a>>b>>c;
	max=a>b?a>c?a:c:b>c?b:c;
	cout<<"The maximum of three numbers is : "<<max<<endl;
	cout<<"Name: Ansh Sharma"<<endl<<"Enrollment no: 07829802021"<<endl;
	return 0;
		
}

