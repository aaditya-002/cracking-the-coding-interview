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

bool checkPalindromePermutation(string inp){
	int* charArr = new int[26]();

	for(char c: inp){
		if(c < 'a'){
			charArr[c - 'A'] = !charArr[c - 'A'];
		}else{
			charArr[c - 'a'] = !charArr[c - 'a'];
		}
	}

	int count = 0;

	for(int i = 0; i< 26; i++){
		if(charArr[i]){
			count += 1;
			if(count > 1){
				return false;
			}
		}
	}

	return true;
}

int main(){
	quickstart();
	string inp;
	cin>>inp;


	if(checkPalindromePermutation(inp)){
		cout<<"it is a permutation of a palindrome.";
	}else{
		cout<<"it is not a palindromic palindrome.";
	}
	return 0;
}