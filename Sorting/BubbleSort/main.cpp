#include <bits/stdc++.h>
using namespace std;

// input/output
void io(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
}

// swapping
void swap(int *ap, int *bp){
	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}

// printing int vector
void printvi(vector<int> S){
	for(auto e: S){
		cout<<e<<" ";
	}
}

vector<int> BubbleSort(vector<int> A, int n){
	for(int i=0; i<n-1; i++){
		
		for(int j=0; j<n-i-1; j++){
			if(A[j] > A[j+1]){
				swap(&A[j],&A[j+1]);
			}
		}
	}

	return A;
}


int main() {
	io();

	vector<int>A;
	int n,input;

	while(cin>>input){
		A.push_back(input);
	}

	n = A.size();

	vector<int> S = BubbleSort(A, n);
	
	printvi(S);

	return 0;
}