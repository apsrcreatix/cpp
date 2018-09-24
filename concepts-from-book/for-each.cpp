#include <iostream>
using namespace std;

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

	for (auto x : array)
		cout << x << " ";

	return 0;
}