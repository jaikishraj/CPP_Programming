#include<iostream>
using namespace std;
int main(){

    int arr[5]={1,8,12,4,7};
    int ans = INT64_MIN;

    for(int i=0; i<5; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans<<" ";

    ans = INT64_MAX;
    for(int i=0; i<5; i++)
    {
      if(arr[i]<ans)
      ans=arr[i];
    }
    cout<<ans<<" ";
}