#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={0,0,0,0};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==1)
        {
            cout<<i;
            break;
        }
        else
        {
            cout<<"-1";
            break;

        }
        
    }
    
}