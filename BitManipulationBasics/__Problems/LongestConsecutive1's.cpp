//Link: https://www.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ans=0,cnt=0;
    for(int i=0;i<31;i++)
    {
        int val=1<<i;
        if(val&n)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            cnt=0;
        }
    }
    return ans;
}
