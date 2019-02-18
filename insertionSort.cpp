#include <iostream>
using namespace std;

int main()
{
	int index,i,j,temp, number,arr[100];

	cout<<"elements want ? "<<endl;
	cin>>number;

	cout<<"Enter the elements: "<<endl;
	for(i=0;i<number;i++)
	{
		cin>>arr[i];
	}

	for(j=1;j<number;j++)
	{
		index=arr[j];
		i=j-1;
		while((i>=0)&&(arr[i]>=index))
		{
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
			i=i-1;
		}
		arr[i+1]=index;
	}

	cout<<"Elements after sorting using insertion:  "<<endl;
	for(i=0;i<number;i++)
	{
		cout<<" "<<arr[i]<<endl;
	}

	return 0;
}
