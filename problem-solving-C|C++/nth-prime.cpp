#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return true;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int nthPrime(int nth){
if(nth==1) return 2;
int counter =1;

for(int i=3;;i+=2){
    if(isPrime(i)){
        counter+=1;
        if(counter==nth) return i;
    }
}
}
int main()
{
    int nth =  10;
    cout<<nthPrime(nth)<<endl;
    return 0;
}