#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
void introduction(){
    // assigning vector
    vector<int> myVector;
    int value, i;
    // pushing from back
    cout << "Enter 0 to end the pushing" << endl;
    int counter = 0;
    do
    {
        counter++;
        cin >> value;
        // pushing from back
        if(value!=0)
        myVector.push_back(value);
        cout << "Current vector :";
        // prints the vector
        for (i = 0; i < counter; i++)
            cout << myVector[i] << " ";
        // end of line
        cout << endl;
    } while (value);
}
void variableSizeVector(){

}
int main(){
introduction();
return 0;
}