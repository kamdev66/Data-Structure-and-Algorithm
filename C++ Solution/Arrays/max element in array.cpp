/* Find the maximum element in the array */
/* Time Complexity :- O(n) */
/* Space Complexity :- O(1) */
#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=INT_MIN;   /* Keep a variable max , which stores the maximum element till i. After iterating whole array, you'll get your answer*/
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max<<endl;
	
}
