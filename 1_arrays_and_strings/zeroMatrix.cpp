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

void setCheckRowAndCol(int **arr, int n, int m, bool &checkRow, bool &checkCol){
	for(int i = 0; i<n; i++){
		if(arr[i][0] == 0){
			checkCol = true;
			break;
		}
	}

	for(int j = 0; j<m; j++){
		if(arr[0][j] == 0){
			checkRow = true;
			break;
		}
	}
}


void setRow1AndCol1(int **arr, int n, int m){
	for(int i = 1; i < n; i++){
		for(int j = 1; j< m; j++){
			if(arr[i][j] == 0){
				arr[0][j] = arr[i][0] = 0;
			}
		}
	}
}

void setZerosInInner(int **arr, int n, int m){
	for(int i = 1; i<n;i++){
		if(arr[i][0] == 0){
			for(int j = 1; j<m ;j++){
				arr[i][j] = 0;
			}
		}
	}

	for(int j = 1; j<m; j++){
		if(arr[0][j] == 0){
			for(int i = 1; i<n; i++){
				arr[i][j] = 0;
			}
		}
	}
}


void setZerosInOuter(int** arr, int n, int m, bool checkRow, bool checkCol){
	if(checkRow){
		for(int j = 0; j<m; j++){
			arr[0][j] = 0;
		}
	}

	if(checkCol){
		for(int i = 0; i<n; i++){
			arr[i][0] = 0;
		}
	}
}

void setZero(int** arr, int n, int m){
	bool checkRow = false;
	bool checkCol = false;
	setCheckRowAndCol(arr, n, m, checkRow, checkCol);


	setRow1AndCol1(arr, n, m);


	setZerosInInner(arr, n, m);


	setZerosInOuter(arr, n, m, checkRow, checkCol);
}

int main(){
	quickstart();

	int n, m;
	cin>>n>>m;

	int **arr = new int*[n]();

	for(int i = 0;i<n;i++){
		arr[i] = new int[m]();

		for(int j = 0; j < m; j++){
			cin>>arr[i][j];
		}
	}

	setZero(arr, n, m);


	for(int i = 0; i < n; i++){
		for(int j = 0; j< m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}