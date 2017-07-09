#include <iostream>
#include <vector>
using namespace std;
int fact(int val){
	int ret =1;
	while(val >1)
		ret *= val--;
	return ret;
}
int main(){
	cout << "input an number:" << endl;
	int input = 0;
	cin >> input;
	int j =fact(input);
	cout << j << endl;
	return 0;
}