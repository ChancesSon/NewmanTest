#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>

using namespace std;


//功能需求
vector<string> FunctionParam = {
	"1.网站404攻击",
    "2.网站篡改攻击",
	"3.网站攻击记录",
	"4.DNS攻击",
	"5.服务器重启攻击",
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