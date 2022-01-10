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
