#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={11, 1, 13, 21, 3, 7};
   int arr1[]={11, 3, 7, 1};
   int arr2[]={};
int count=0;
   
    sort(arr,arr+6);
    sort(arr1,arr1+4);
    int j=0;
    for(int i=0;i<6;i++)
    {
        if(j<4 && arr[i]==arr1[j])
            j++;
        
    }
    if(j==5)
        cout<<"yes";
    else
       cout<<"no";
    }
    
