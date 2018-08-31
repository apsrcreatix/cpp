#include <iostream>
using namespace std;
void printer(int array[]){
	for(auto x:array) cout<<x<<" ";
}
int main(int argc, char const *argv[])
{
	int size;
	cin>>size; //size of array
	int array[size]; //array declaration
	int i=0;
	while(i<size){
		cin>>array[i]; //initialisation
		i++;
	}
	// for each variable x in array
	printer(array);//printing
	return 0;
}