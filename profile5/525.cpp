#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	try{
	int a,b;
	cin >>a;
	cin >> b;
	cout << a/b << endl;
	return 0;
}catch(exception e){
	cout << "error " << endl;
	return 0;
}
}