#include<bits\stdc++.h>

typedef long long ll;
using namespace std;


// Given an array (or string), the task is to reverse the array/string.
// Examples : 
 

// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}


// Solution for the ARRAY
int main(){
    
    ll n;
    cin>>n;
    vector<ll> inp(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>inp[i];
    }

    for(ll i = 0 ; i < n/2 ; i++){
        ll temp = inp[i];
        inp[i] = inp[n-1-i];
        inp[n-1-i] = temp;
    }
	for(ll i = 0 ; i < n ; i++){
        cout<<inp[i]<<" ";
    }
    return 0;
}
