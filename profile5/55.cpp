#include <iostream>
#include <vector>
using namespace std;
int main(){
	int score = 69;
	if(score < 60)
		cout << 'D';
	else if(score < 90)
		cout << 'C';
	else
		cout << 'A';
	return 0;
}