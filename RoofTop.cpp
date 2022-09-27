#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,2,2,3,2};
    int n=5;
int count=0;
    for (int i = 0; i < n; i++)
    {

       if (arr[i]!=arr[i+1])
       {
        if (arr[i+1]>arr[i])
       {
       count++;
       }
       }
       
       
    }
    cout<<count-1;
}