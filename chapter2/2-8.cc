// 使用数组调用函数指针
#include <iostream>
#include <cstdlib>

using namespace std;

int a(){return 1;}
int b(){return 2;}
int c(){return 3;}

enum FuncType {
	func_a,
	func_b,
	func_c
};
int main(void)
{

	int(*FunctionPointerArr[])() = {a,b,c};
	cout << FunctionPointerArr[func_a]() << endl;
	cout << FunctionPointerArr[func_b]() << endl;
	cout << FunctionPointerArr[func_c]() << endl;
	return 0;
}