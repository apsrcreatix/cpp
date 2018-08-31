#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{	int size = 8;
	string pattern = "";
	for(int i = 0;i<size;i++){
		for(int j=0;j<size;j++){
			if((i+j)%2==0)
				pattern+=" ";
			else
			pattern+="#";
		}
		pattern+="\n";
	}
	cout<<pattern; 
	return 0;
}