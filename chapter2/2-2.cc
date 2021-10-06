#include <iostream>
#include <cstdlib>

using namespace std;

//fibonacci function1
//int fibon_elem(int pos)
//{
//	if (pos <= 0)
//		exit(-1);
//	int elem = 1;
//	int n_1 = 1, n_2 = 1;
//	for (int i = 3; i <= pos; ++i)
//	{
//		elem = n_1 + n_2;
//		n_1 = n_2;
//		n_2 = elem;
//	}
//	return elem;
//}

//fibonacci function2
bool fibon_elem(int pos, int &elem)
{
	//防止溢出
	if (pos <= 0 || pos > 1024)
	{
		elem = 0;
		return false;
	}
	elem = 1;
	int n_1 = 1, n_2 = 1;
	for (int i = 0; i <= pos; ++i)
	{
		elem = n_1 + n_2;
		n_1 = n_2;
		n_2 = elem;
	}
	return true;
}

//print array
bool print_sequence(int pos)
{
	if (pos <= 0 || pos > 1024)
	{
		cerr << "invalid position:" << pos
			<< "-- cannot handle request!" << endl;
		return false;
	}
	cout << "The Fibonacci Sequence for " << pos << " positions: " << endl;
	switch (pos)
	{
	default:
	case 2:
		cout << "1 ";
	case 1:
		cout << "1 ";
		break;
	}
	int elem;
	int n_1 = 1, n_2 = 1;
	for (int i = 3; i <= pos; ++i)
	{
		elem = n_1 + n_2;
		n_1 = n_2;
		n_2 = elem;
		cout << elem << (!(i % 10) ? "\n\t" : " ");
	}
	cout << endl;
	return true;
}

int main()
{
	int pos, elem;
	while (cin >> pos)
	{
		if (fibon_elem(pos, elem))
			cout << "elem # " << pos << " is " << elem << endl;
		else
			cout << "Sorry, could not calculate element # " << pos << endl;

		print_sequence(pos);
	}
	return 0;
}