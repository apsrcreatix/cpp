#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int find(int,int) ;
int findSolution(int) ;

int findSolution(int target){

    int find(int current,int history){
        if(current == history){
            return history;
        }else if(current > target){
            return null;
        }else {
            return 
            find(current+5,history+5)
            ||
            find(current*3,history*3);
        }
    }

    return find(1,1);
}
int main(){
cout<<findSolution(21);
}