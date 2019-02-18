#include<iostream>
using namespace std;

void sort(int arr[],int a, int s,int n){

	int num1=s-a+1,i,j,k;

	int num2=n-s;

	int left[num1], right[num2];

	for(i=0;i<num1;i++)

	{
		left[i]=arr[a+i];
	}

	for(j=0;j<num2;j++)
	{
		right[j]=arr[s+j+1];
	}

	i=0,j=0;

	for(k=a;i<num1 && j<num2;k++)
	{
		if(left[i]<right[j])
		{
			arr[k]=left[i++];
		}
		else
		{
			arr[k]=right[j++];
		}
	}

	while(i<num1)
	{
		arr[k++]=left[i++];
	}

	while(j<num2)
	{
		arr[k++]=right[j++];
	}
}

void mergeSort(int arr[],int a,int n)
{
	int s;

	if(a<n)
	{
		s=(a+n)/2;
		mergeSort(arr,a,s);
		mergeSort(arr,s+1,n);
		sort(arr,a,s,n);
	}

}
int main(){

	int arrSize;
	cout<<"elements enter : "<<endl;
	cin>>arrSize;
	int arr[arrSize];
	cout<<"Enter the elements :";
	for(int i=0;i<arrSize;i++)
	{
		cin>>arr[i];
	}

	mergeSort(arr,0,arrSize-1);
   cout<<"Sorted elements using Merge sort : ";

	for(int i=0;i<arrSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

