/* Given an unsorted array of size "n" of non-negative integers,find a continuous subarray which adds to a given number "s" */
/* method 1:- Time:- O(n^2) , Space:- O(1) */ 

#include<iostream>
using namespace std;
int main(){
	int n,s=12;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
int sum;
int i,j;
	for( i=0;i<n;i++){
			sum=0;
		for( j=i;j<n;j++){
			sum=sum+arr[j];	
			if(sum==s){
				cout<<i<<" "<<j<<endl;
				return 0;
			}
			}
			
	}
	
}

/* Method:-2 by using Two pointer method , Time:- O(n), Space:- O(1) */
#include<iostream>
using namespace std;
int main(){
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int st=0,sum=0,i;
	for(i=0;i<n;i++){
		while(sum>s && st<i){
			sum=sum-a[st];
			st++;  
		}
		if(sum==s){
			cout<<st<<" "<<i-1<<endl;
		}
		if(i<n){
			sum=sum+a[i];
		}
	}
	
}
