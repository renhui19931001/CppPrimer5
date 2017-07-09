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
	int j =fact(5);
	cout << j << endl;
	return 0;
}