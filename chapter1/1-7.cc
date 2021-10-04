/*
读取文件
将文件中每个字保存到vector<string>中
便利vector将内容打印
使用泛型算法sort将文字排序
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ifstream in_file("C:\\Users\\hs769\\Desktop\\effective\\chapter1\\text.txt");
	if (!in_file)
	{
		cerr << "oops! unable to open input file" << endl;
		return -1;
	}

	ofstream out_file("text.sort");
	if (!out_file)
	{
		cerr << "oops! unable to open output file" << endl;
		return -2;
	}

	string word;
	vector<string> text;
	while (in_file >> word)
		text.push_back(word);

	cout << "unsorted text:" << endl;
	for (int i = 0; i < text.size(); ++i)
		cout << text[i] << " ";
	cout << endl;

	sort(text.begin(), text.end());
	out_file << "sorted text:\n";
	for (int i = 0; i < text.size(); ++i)
		out_file << text[i] << " ";
	out_file << endl;

	return 0;
}