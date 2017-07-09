#include <iostream>
#include <string>
#include <vector>
using namespace std;
inline int f(const int,const int);
typedef decltype(f) fp;
inline int Numadd(const int n1,const int n2){return n1+n2;}
inline int Numsub(const int n1,const int n2){return n1-n2;}
inline int Nummul(const int n1,const int n2){return n1 * n2;}
inline int Numndiv(const int n1,const int n2){return n1 /n2;}

std::vector<fp*> v{Numadd,Numsub,Nummul,Numndiv};


int main(){
	for (auto it = v.begin(); it != v.end(); it++)
	{
		/* code */
		cout << (*it)(2,2) << endl;
	}
	return 0;
}