#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1, 3, 5, 5, 5, 5, 67, 123, 125};
    int i,j;
    int n=9;

    for ( i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1])
        {
           cout<<i<<endl;
           
        }
        
        
    }
    
    
}