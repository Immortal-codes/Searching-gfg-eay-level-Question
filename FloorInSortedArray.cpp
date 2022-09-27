#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,2,8,10,11,12,19};
    int x=0;
    int n=7;

    int i; 
    int dif=0;
    bool flag=true;
    int r=-1;
//  sort(arr,arr+7);
    for ( i = 0; i < n; i++)
    {
       if (x==arr[i])
       {
        cout<<i;
        break;
       }
       else if(i==n-1){
        for (int j=0;j<n;j++){
            int diff=x-arr[j];
            if(diff>0){
            if(flag){
                flag=false;
                dif=diff;
            }
            else if(diff<dif){
                dif=diff;
                r=j;
            }
        }
        }
       }


       
    }

    // cout<<dif;
    cout<<r;
    
    
    
}