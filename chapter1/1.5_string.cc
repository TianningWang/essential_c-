//编写一个程序，能够询问用户姓名，读取用户输入内容
//确保用户输入名大于两个字节，如果用户输入了有效名称，相应一些信息
//一种使用string完成，一种使用c字符串完成
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_name;
	cout << "please enter your name: ";
	cin >> user_name;

	switch (user_name.size())
	{
	case 0:
		cout << "Ah, the user with no name."
			<< "Well, ok hi, user with no name" << endl;
		break;
	case 1:
		cout << "A 1-character name? Hmm, have you read Kafka?:"
			<< "hello," << user_name << endl;
		break;
	default:
		cout << "Hello," << user_name
			<< "--- happy to make your acquaintance!" << endl;
		break;
	}
	return 0;
}