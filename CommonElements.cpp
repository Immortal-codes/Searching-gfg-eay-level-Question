#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int arr4[]={};
    int a=6,b=5,c=8;

    for ( int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
           if (arr1[i]!=arr2[i])
           {

            arr4[i]=arr1[i];
               
           }
           
        }
        
    }
    
    for ( int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
           if (arr2[i]!=arr3[i])
           {

            arr4[i]=arr3[i];
               
           }
           
        }
        
    }


    for (int i = 0; i < c; i++)
    {
       cout<<arr4[i]<<" ";
    }
    
    
    
    
}