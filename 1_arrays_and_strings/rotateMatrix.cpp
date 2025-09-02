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

void rotateRows(int **arr, int n){
	for(int i = 0; i< n; i++){
		int f = 0;
		int l = n-1;

		while(f<l){
			swap(arr[i][f++], arr[i][l--]);
		}
	}
}


void rotateOnLeadingDiagonal(int** arr, int n){
	for(int i = 0; i<= n/2; i++){
		for(int j = 0; j<n-i-1; j++){
			swap(arr[i][j], arr[n-j-1][n-i-1]);
		}
	}
}

void rotateMatrix(int **arr, int n){

	rotateRows(arr, n);

	rotateOnLeadingDiagonal(arr, n);
}
int main(){
	quickstart();
	int n;
	cin>>n;

	int **arr = new int*[n]();

	for(int i = 0;i<n;i++){
		arr[i] = new int[n]();

		for(int j = 0; j < n; j++){
			cin>>arr[i][j];
		}
	}

	rotateMatrix(arr, n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j< n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}