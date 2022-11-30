#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,a,sum=0,x=0;
cin>>n;
//int arr[n];
cin>>a;
for(int i=1;i<=n;i++)
{
    x=a%10;
    sum=sum+x;
    a=a/10;

}
cout<<sum<<endl;

return 0;
}
