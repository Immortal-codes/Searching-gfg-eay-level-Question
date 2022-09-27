#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {1,2,3};
    int n=3;
    int mx = 0;

        for(int i = 0; i < n;++i)

            if(arr[i] > arr[mx]) mx = i;

        cout<<mx;
    
}