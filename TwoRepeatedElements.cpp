#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,2,2,1};
    int n=4;
   
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
       if (arr[j]==arr[i])
       {
            cout<<arr[i]<<" ";
       }
       
     }
     
     
   }
   

}