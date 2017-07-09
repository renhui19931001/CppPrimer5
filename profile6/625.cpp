#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	/* code */
	//从main中读取参数
	string str = "";
	str += argv[1];
	str += argv[2];
	cout << str << endl;
	return 0;
}