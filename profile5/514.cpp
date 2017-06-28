#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string> input;
	string sinput;
	while(cin >> sinput && sinput !="eof"){
		input.push_back(sinput);
	}
	auto beg = input.begin();
	int maxNumber = 1;
	int now = 0;
	for(;beg != input.end();beg++){
		if(now == 0){
			now ++;
			continue;
		}
		if(*beg == *(beg-1))
			now++;
		else
			now = 1;

		if(now > maxNumber)
			maxNumber = now;
	}
	if(maxNumber == 1)
		cout << "no complete number" << endl;
	else
		cout << maxNumber;
}