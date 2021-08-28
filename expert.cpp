#include<bits/stdc++.h>
using namespace std;

//<------------------------------------------------------------------------------->
 int dp[300][300];
 int wines(int p[], int i,int j, int n,int y){
    if(i>j) return 0;
    if(dp[i][j]!= -1)
    return dp[i][j];
    int fir = wines(p,i+1,j,n,y+1)+p[i]*y;
    int last = wines(p,i,j-1,n,y+1)+p[j]*y;
 
    return dp[i][j]=max(fir,last);
 }
int main(){
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 memset(dp,-1,sizeof(dp));
 int n;
 cin>> n;
  int p[n]; //  5   2 3 5 1 4
 for(int i=0; i<n; i++){
    cin>>p[i];
 }
 cout<<wines(p,0,n-1,n,1);
    return 0;
}
