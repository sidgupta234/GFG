// http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
// Write a program to print all permutations of a given string
#include<bits/stdc++.h>
using namespace std;


void permute(int start, int end, string x){
	if(start==end){
		cout<<x<<endl;
		return;
	}

	for(int i=start; i<=end; i++){
		swap(x[start], x[i]);
		permute(start+1, end, x);
		swap(x[start], x[i]);
	}
		
}

int main(){
	string x;
	cin>>x;
	permute(0,x.size()-1, x);
	return 0;
}

/*
Input :
abcd

Output :
abcd
abdc
acbd
acdb
adcb
adbc
bacd
badc
bcad
bcda
bdca
bdac
cbad
cbda
cabd
cadb
cdab
cdba
dbca
dbac
dcba
dcab
dacb
dabc
*/