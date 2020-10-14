//Reversal Algorithm for array rotation
//Complexity if O(n)
#include<bits/stdc++.h>
using namespace std;
void reverse_it(int a[],int f,int l)
{
	for(int i=f,j=l-1;i<j;i++,j--)
		a[j]=(a[i]+a[j])-(a[i]=a[j]);
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int d=3,n=10;
		reverse_it(arr,0,d);
		reverse_it(arr,d,n);
		reverse_it(arr,0,n);
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\t";
	cout<<endl;
}
