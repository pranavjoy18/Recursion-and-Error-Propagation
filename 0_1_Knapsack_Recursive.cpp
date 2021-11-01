#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int Knapsack(int wt[],int val[],int W,int N){

	/*	wt[] -> integer array containing the weights of all the elements
		val[] -> integer array containing the calues of all the elements 
		W -> an integer that represents the maximum possible capacity of Knapsack
		N -> no of elements that are left out of the Knapsack

	*/

	if(N==0 || W==0)	return 0; // Base Condition

	// Iterative condition
	if(wt[N-1]<=W)	
		return max(val[N-1] + Knapsack(wt,val,W-wt[N-1],N-1),
					Knapsack(wt,val,W,N-1));

	return Knapsack(wt,val,W,N-1);
}

int main(){

	int t; cin>>t; // number of testcases


	while(t--){

		int N,W;// N -> number of elements , W-> capacity of Knapsack
		
		cin>>N;
		
		int wt[N],val[N]; // weight and value arrays

		for(int i =0;i<N;i++)	cin>>wt[i];

		for(int i =0;i<N;i++)	cin>>val[i];

		cin>>W;
		
		cout<<"Maximum possible value in Knapsack: "<<Knapsack(wt,val,W,N);
	

	}
	
	return 0;
}