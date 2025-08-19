/*
	Problem: 1
	Implement an algorithm to determine if a string has all unique characters.
*/

#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define u_set unordered_set
#define testfor(T) ll T; cin>>T; while(T--)
using namespace std;
void quickstart()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
}

bool containsAllUnique(string inputStr){
	int *arr = new int[128]();

	for(char c: inputStr){
		if(arr[c] & 1){
			return false;
		}
		arr[c] = 1;
	}

	return true;
}


int main(){
	quickstart();
	string inputStr;
	cin>>inputStr;

	if(containsAllUnique(inputStr)){
		cout<<"only unique characters";
	}else{
		cout<<"duplicate characters found in this string";
	}
	return 0;
}