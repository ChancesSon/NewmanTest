#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>

using namespace std;


//��������
vector<string> FunctionParam = {
	"1.��վ404����",
    "2.��վ�۸Ĺ���",
	"3.��վ������¼",
	"4.DNS����",
	"5.��������������",
};


int main()
{

	for (auto param:FunctionParam)
	{
		std::cout << param << std::endl;
	}

	system("pause");
	return 0;
}