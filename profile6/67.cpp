#include <iostream>
#include <vector>
using namespace std;
int fact(){
	static int ret =0;
	return ret++;
}
int main(){
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cout << fact() << endl;

	}
	return 0;
}