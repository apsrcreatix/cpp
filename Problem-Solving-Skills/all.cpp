#include "iostream"
using namespace std;
int isPrime(int number){
    int flag = 1;
    int i;
    for(i=2;i=number/2;++i){
        if(i%number==0){
            flag=0;break;
        }
    }
    return flag;
}

    int solver(int *A, int n1, int B)
    {
        int counter = 0;
        while (n1--){
            cout<<isPrime(*A);
            if (isPrime(*A) && (B % (*A) == 0))
            {
             counter++;
            }
            A++;
        }
    
    return counter;
    }
    int main()
    {
        int size;
        cin >> size;
        int array[size];
        int num;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        cin >> num;
        cout << solver(array,size,num);
}