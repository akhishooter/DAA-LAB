#include<bits/stdc++.h>
using namespace std;
void jump_search(int arr[],int n,int k){
    int start = 0;
    int c=1;
    int end = sqrt(n);
    while(arr[end] < k && end < n){
      c++;
        start = end;
        end = end + sqrt(n);
        if(end > n - 1)
           {
            end = n-1;
            break;
           }
    }
	   for(int i = start; i <= end; i++) { 
      if(arr[i] == k)
         {
          cout<<"present "<<c;
         return ;
         }
    }
    cout<<"not present "<<c;
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted form"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    int k;
    cin>>k;
    jump_search(arr,n,k);
    return 0;
}