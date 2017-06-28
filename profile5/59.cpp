#include <iostream>
#include <vector>
using namespace std;
int main(){
	cout << "Enter an string" << endl;
	string str;
	cin >> str;
	int i =0,sum = 0;
	while(i<str.size()){
		if(static_cast<char>(str[i]) == 'a')
			sum++;
		i++;
	}
	cout << sum << endl;
	return 0;
}