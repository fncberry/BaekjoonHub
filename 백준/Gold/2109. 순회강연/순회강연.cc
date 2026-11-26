#include<bits/stdc++.h>
using namespace std;
int n,res=0;
pair<int,int> input[10001];
int arr[10001];
priority_queue<pair<int,int>> pq;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>input[i].first>>input[i].second;
        pq.push(input[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=pq.top().second;j>=1;j--)
        {
            if(arr[j]==0)
            {
                arr[j] = pq.top().first;
                break;
            }
        }
        pq.pop();
    }
    for(int i=1;i<=10000;i++) res+=arr[i];
    cout<<res<<endl;
}