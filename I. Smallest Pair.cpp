#include<bits/stdc++.h>
using namespace std;

    int main()
    {
      int arr[10000],i,j,k,x,n,mini,sum=0;
      cin>>n;

      for(k=0; k<n; k++)
      {
          cin>>x;

      for(i=0;i<x;i++)
      {
          cin>>arr[i];
      }
      mini=1e9;
      sum=0;

      for(i=0;i<x;i++)
      {
          for(j=i+1;j<x;j++)
          {
              sum = (arr[i]+ arr[j]+ j) - i;

              if(sum<mini)
              {
                  mini=sum;
              }
          }
        }
        cout<<mini<<endl;
      }


        return 0;
    }
