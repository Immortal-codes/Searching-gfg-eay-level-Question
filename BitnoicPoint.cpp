#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1, 45, 47, 50, 5};
    int n=5;
    int k=n-1;

    sort(arr,arr+n);
    for (int i = 0; i <n; i++)
    {
       cout<<arr[k]<<" ";
       break;
    }
    
}