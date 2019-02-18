#include <iostream>
using namespace std;

void heap(int *arr, int n, int nummber)
{
    int m, temp;
    temp = arr[n];
    m = 2*n;
    while (m <= number)
    {
        if (m < number && arr[m+1] > arr[m])
            m = m+1;
        if (temp > arr[m])
            break;
        else if (temp <= arr[m])
        {
            arr[m/2] = arr[m];
            m = 2*m;
        }
    }
    arr[m/2] = temp;
    return;
}
void heapsort(int *arr, int num)
{
    int i, temp;
    for (i = num; i >= 2; i--)
    {
        temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        heap(arr, 1, i - 1);
    }
}
void createHeap(int *arr, int num)
{
    int i;
    for(i = num/2; i >= 1; i--)
    {
        heap(arr, i, num);
    }
}
int main()
{
    int num, i, x;
    cout<<"How many elements do you want to enter?\n";
    cin>>num;
    int arr[20];
    for (i = 1; i <= num; i++)
    {
        cout<<"Enter element : "<<(i)<<endl;
        cin>>arr[i];
    }
    createHeap (arr,num);
    heapsort(arr, num);
    cout<<"\n\nSorted Array using heapsort\n";
    for (i = 1; i <= num; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
