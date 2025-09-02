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

string toString(int counter){
	string intStr = "";

	while(counter){
		intStr += (counter%10 + '0');
		counter /= 10;
	}

	int i = 0;
	int j = intStr.length() - 1;

	while(i<j){
		swap(intStr[i++], intStr[j--]);
	}
	return intStr;
}

string compressString(string inputStr){
	int i = 0;
	int j = 0;
	int counter = 0;

	string optStr = "";

	while(j<inputStr.length()){
		if(inputStr[i] != inputStr[j]){
			optStr += inputStr[i] + toString(counter);
			counter = 0;
			i = j;
		}
		counter++;
		j++;
	}

	optStr += inputStr[i] + toString(counter);

	return optStr.length() <= inputStr.length() ? optStr: inputStr;
}

int main(){
	quickstart();
	string inpStr;
	cin>>inpStr;

	cout<<compressString(inpStr)<<endl;
	return 0;
}