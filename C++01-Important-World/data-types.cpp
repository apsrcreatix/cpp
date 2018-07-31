#include "iostream"
#include "math.h" //using math.h for mathematical function available
using namespace std;
int main(){
    //some common data types you may use
bool decision = true;
char bloodGroup = 'B';
int age = 21;
double numberOfPeople = 999999;
// size of these data types 
// endl for end of line and gives new line in output 

cout <<"Learning about data types :"<<endl<<endl;
cout <<"size of bool is "<< sizeof(bool) <<" bytes. "<< "Use case : "<<decision<<" is true."<< endl;
cout <<"size of char is " <<sizeof(char) <<" bytes. "<< "Use case : "<<bloodGroup<<" is blood group."<< endl;
cout <<"size of int is "<< sizeof(int) <<" bytes. "<< "Use case : "<<age<<" is my age."<< endl;
cout <<"size of double is " <<sizeof(double) <<" bytes. "<< "Use case : "<<numberOfPeople<<" is my capacity."<< endl;
cout<<endl<<endl;

//auto data type feature
auto character = 'a';
auto integer = 64;
auto biggerNumber = 123123;
auto string = "I don't like suger";
auto z = sqrt(integer);

cout <<"Using auto for avoiding redundancy :" <<endl<<endl;
cout <<character<<endl<<integer<<endl<<biggerNumber<<endl<<string<<endl<<z<<endl<<endl;
}