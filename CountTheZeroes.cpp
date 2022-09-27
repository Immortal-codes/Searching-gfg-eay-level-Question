#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n=12;
int count=0;
    for ( int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
           count++;
        }
        
    }
    cout<<count;
}