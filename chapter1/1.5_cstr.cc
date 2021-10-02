//编写一个程序，能够询问用户姓名，读取用户输入内容
//确保用户输入名大于两个字节，如果用户输入了有效名称，相应一些信息
//一种使用string完成，一种使用c字符串完成
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	//必须先分配一个固定大小的空间（128）
	const int nm_size = 128;
	char user_name[nm_size];
	cout << "Please enter your name: ";
	//setw保证读入不超过127
	cin >> setw(nm_size) >> user_name;

	switch (strlen(user_name))
	{
	case 0:
		cout << "Ah, the user with no name."
			<< "Well, ok hi, user with no name" << endl;
		break;
	case 1:
		cout << "A 1-character name? Hmm, have you read Kafka?:"
			<< "hello," << user_name << endl;
		break;
	case 127:
		//也许得到的字符串已经被setw舍弃一部分
		cout << "That is a ver big name, indeed --"
			<< "we may have needed to shorten it!" << endl
			<< "In any case," << endl;
	default:
		//如果符合前述条件，也会执行至此处，因为先前并没有break
		cout << "Hello, " << user_name
			<< "-- happy to make your acquaintance!" << endl;
		break;
	}
	return 0;
}