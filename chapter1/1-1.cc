#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_name;
	cout << "Please enter your first name: ";
	cin >> user_name;
	cout << endl;
	cout << "Hello, " << user_name << " ... and goodbye" << endl;
	return 0;
}