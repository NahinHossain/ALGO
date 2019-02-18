#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int index,valu,temp,number;
    cout<<"elements want? "<<endl;
    cin>>number;
    int arr[number];
    cout<<"enter values of array : ";
    for (int i = 0; i < number; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= number - 1; i++)
    {
        index = i;
        valu = arr[i];
        for (int j = i + 1; j <= number; j++)
        {
            if (arr[j] < valu)
            {
                valu = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    cout<<"After sorting using selection sort"<<endl;
    for (int n = 0; n < number; n++)
    {
        cout<<arr[n]<<endl;
    }
    return 0;
}
