#include <iostream>
using namespace std;
long power(int base,int exponent){
	if(exponent==0) return 1;
	else
	return base*power(base,exponent-1);
}
int main(int argc, char const *argv[])
{	int number,exponent;
	cin>>number>>exponent;
	cout<<power(number,exponent);
	return 0;
}