#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_name, last_name;
	cout << "please enter your first name: ";
	cin >> first_name;
	cout << "Hi, " << first_name << endl;
	cout << "please enter your last name: ";
	cin >> last_name;
	cout << endl;
	cout << "Hello, " << first_name << " " << last_name << "... and goodbye" << endl;
	return 0;
}