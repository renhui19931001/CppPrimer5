#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count(initializer_list<int> a);
int main(){
	cout << count({1,7,8}) << endl;
	return 0;
}
int count(initializer_list<int> a){
	int sum = 0;
	for(auto beg = a.begin(); beg != a.end(); beg++){
		sum += *beg;
	}
	return sum;
}