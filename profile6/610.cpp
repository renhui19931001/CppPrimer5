#include <iostream>
#include <vector>
using namespace std;
void change(int* a,int* b){
	swap(*a,*b);
}
int main(){
	int a =10;
	int b =20;
	change(&a,&b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}