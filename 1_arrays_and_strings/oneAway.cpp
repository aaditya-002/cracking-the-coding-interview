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

bool checkOneEdit(string shorter, string longer);

bool oneEditAway(string str1, string str2){
	int m = str1.length() - str2.length();
	if(m > 1 || m < -1){ 
		return false;
	}

	//using without typecasting in c++ will give false always. as it is calculated in unsigned integers.

	// if((int)(str1.length() - str2.length()) > 1 || (int)(str1.length() - str2.length()) < -1){
	// 	cout<<"here 2"<<endl;
	// 	return false;
	// }

	string shorter = str1.length() < str2.length() ? str1 : str2;
	string longer = str2.length() > str1.length() ? str2 : str1;

	return checkOneEdit(shorter, longer);
}

bool checkOneEdit(string shorter, string longer){
	int idx1 = 0;
	int idx2 = 0;

	bool change = false;

	while(idx1 < shorter.length() && idx2 < longer.length()){
		if(shorter[idx1] != longer[idx2]){
			if(change){
				return false;
			}
			change = true;
		}else{
			idx1++;
		}
		idx2++;

	}

	return true;
}

int main(){
	quickstart();
	string str1, str2;
	cin>>str1>>str2;

	if(oneEditAway(str1, str2)){
		cout<<"one edit away";
	}else{
		cout<<"need more changes";
	}
	return 0;
}