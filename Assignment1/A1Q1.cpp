//
// Created by paluk on 06-Aug-21.
//

/* Given snippet */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b=1;
    int n; cin>>n;
    while(b<=n){
        a += 1;
        b += 1;
        cout<<"Hi";
    }
    return 0;
}


//So, the question is to find the time complexity for the snippet.
/*
 * since there is only one loop that iterates for "n" times, beacause "b" start from 1 and goes for all the way till "n"
 * So the time Complecity fo rthe loop will be 'O(n)'
 */

//So, the answer to the question is:
// The complexity for the snippet is 'O(n)'