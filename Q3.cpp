#include <iostream>
using namespace std;
int main()
{
	int s, u, t, a;
	cout << "\nEnter the value of initial velocity: ";
	cin >> u;
	cout << "\nEnter the time: ";
	cin >> t;
	cout << "\nEnter the value of acceleration: ";
	cin >> a;
	
	s = (u*t)+ (a*(t*t));
	cout << "\nDisplacement = " << s << endl;
	return 0;
}

