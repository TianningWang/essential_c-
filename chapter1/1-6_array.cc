/*
输入一串整数
将整数读取到array或者vector中
然后计算数值总和和平均值
将计算结果输出
*/
#include <iostream>

using namespace std;

int main()
{
	const int array_size = 128;
	int ia[array_size];
	int ival, icnt = 0;
	while (cin >> ival && icnt < array_size)
		ia[icnt++] = ival;
	
	int sum = 0, avg;
	for (int i = 0; i < icnt; ++i)
		sum += ia[i];
	avg = sum / icnt;
	cout << "Sum of " << icnt << " elements: " << sum
		<< ". Average: " << avg << endl;
	return 0;
}