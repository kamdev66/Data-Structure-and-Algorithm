/* First Repeating Element in an array */

/*Method:-1 -> time complexity:- O(n^2)   Space Complexity:- O(1)  */

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cout<<a[i]<<endl;
				return 0;
			}
		}
	}
}

/* Method:-2 -> Time Complexity:- O() */
/* Time:- O(n) , Space :- O(n) */
 #include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	int N=100;
	int arr2[N];
	for(int i=0;i<N;i++){
		arr2[i]=-1;
	}
	int min_index=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr2[arr[i]]==-1){
			arr2[arr[i]]=i;
		}
		else{
			min_index=min(min_index,arr2[arr[i]]);
		}
	}
	if(min_index==INT_MAX){
		cout<<"No repeating element"<<endl;
	}
	else{
		cout<<"index="<<min_index<<endl;
	}
} 
