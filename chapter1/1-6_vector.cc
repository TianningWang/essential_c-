/*
输入一串整数
将整数读取到array或者vector中
然后计算数值总和和平均值
将计算结果输出
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int val;
	while (cin >> val)
		ivec.push_back(val);
	
	int sum=0, avg=0;
	for (int i = 0; i < ivec.size(); ++i)
		sum += ivec[i];
	avg = sum / ivec.size();
	cout << "Sum of " << ivec.size() << " elements: " << sum
		<< ". Average: " << avg << endl;
	return 0;
}