#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	for(int i=1;i<=100;i++){
		string output = "";
		if(i%3==0)
		output+="Fizz";
		if(i%5==0)
		output+="Buzz";
		output.empty()?cout<<i<<endl:cout<<output<<endl;
	}
	return 0;
}