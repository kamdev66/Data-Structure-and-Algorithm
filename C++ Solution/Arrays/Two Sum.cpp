/* Given an Array 'A', and a number X,find a pair(a,b) in A such that a+b=X */
/* method1:- Time:- O(n^2) , Space:- O(1) */
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cin>>n>>sum;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;i<n;i++){
			if(sum-arr[i]==arr[j]){
				cout<<j<<" "<<i<<endl;
				break;
			}
		}
	}
}

/* method2:- Time:- O(n) , Space:- O(n) */

#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cin>>n>>sum;
	int arr[n];
	int hash[100]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp;
	for(int i=0;i<n;i++){
		temp=sum-arr[i];
		if(temp>=0 && hash[temp]==1){
			cout<<arr[i]<<"  "<<temp<<endl;
		}
		else{
			hash[arr[i]]=1;
		}
	}	
}
