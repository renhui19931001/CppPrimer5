#include <iostream>
#include <vector>
#include <string>
using namespace std;
void count(std::vector<int> v,int i);
int main(){
	std::vector<int> v = {2,5,0};
	count(v,0);
	return 0;
}
void count(std::vector<int> v,int i){
	if(i < v.size()){
		cout << v[i] << endl;
		count(v,i+1);
	}
}