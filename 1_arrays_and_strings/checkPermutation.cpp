/*
	Given two string, write a method to determine if one is a permutation of the other.
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

bool checkAnagrams(string a, string b){
	if(a.size() < b.size()){
		return false;
	}
	int* arr = new int[26]();
	for(char c: a){
		arr[c - 'a'] += 1;
	}

	for(char c: b){
		arr[c - 'a'] -= 1;

		if(arr[c-'a'] < 0){
			return false;
		}
	}
	return true;
}

int main(){
	quickstart();
	string a, b;
	cin>>a>>b;

	if(checkAnagrams(a, b)){
		cout<<"permutations!";
	}else{
		cout<<"not permutation.";
	}
	return 0;
}