/*
	Write a methodd to replace all spaces in a string with %20
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

char* replaceSpaces(string inputStr){
	int charactersRequired = 0;

	for(char c: inputStr){
		if(c == ' '){
			charactersRequired += 2;
		}
		charactersRequired += 1;
	}


	char* charArr = new char[charactersRequired-1]();
	int i = 0;

	for(char c: inputStr){
		if(c == ' '){
			charArr[i++] = '%';
			charArr[i++] = '2';
			charArr[i++] = '0';
		}else{
			charArr[i++] = c;
		}
	}

	return charArr;
}

int main(){
	quickstart();
	string inpStr;
	getline(cin, inpStr);


	cout<<replaceSpaces(inpStr);
	return 0;
}