//
// Created by paluk on 06-Aug-21.
//

#include "bits/stdc++.h"
using namespace std;

void fun(int);

int main(){
    int n=3;
    fun(n);
    return 0;
}

void fun(int n){
    if(n > 0){
        cout<<n;
        fun(n-1);
        cout<<n;
    }
}