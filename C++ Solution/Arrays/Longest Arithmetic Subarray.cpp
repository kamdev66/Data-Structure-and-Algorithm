/* You have to determine the length of the longest contiguous arithmetic subarray */
/* Time Complexity:- O(n)  */
/* Space Complexity:- O(1) */
/* Input :- [10,7,4,6,8,10,11] */
/* Output :- 4 */
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=2,curr=2;
	int pd,cd;
	for(int i=1;i<=n;i++){
		pd=arr[i]-arr[i-1];
		cd=arr[i+1]-arr[i];
		if(pd==cd){
			curr++;
		}
		else{
			pd=cd;
			curr=2;
		}
	ans=max(ans,curr);
	}
	cout<<ans<<endl;
}
