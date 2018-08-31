#include <string>
#include <iostream>
using namespace std;
int main()
{
	for(string str="#";str.size()<8;str=str+"#")
		cout<<str<<endl;
	return 0;
}