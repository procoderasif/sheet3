#include<bits/stdc++.h>
using namespace std;
int main(){
int N,arr[10000],i,j,coun=0;
cin>>N;
for(i=1;i<=N;i++)
{
   cin>>arr[i];
}
int mini=9999;
for(i=1;i<=N;i++)
{
    if(arr[i]<mini)
    {
        mini=arr[i];
    }
}

for(j=1;j<=N;j++)
{
    if(arr[j]==mini)
    {
        coun++;
    }
}
if(coun%2==0)
{
    cout<<"unlucky"<<endl;
}
else{
    cout<<"lucky"<<endl;
}
return 0;
}
