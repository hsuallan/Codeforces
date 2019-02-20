#include<iostream>
#include<algorithm>
#include<vector>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int q = 0;
    long long int n=0 , a=0 , b=0, cpa = 0 ,cpb = 0,ans =  0;
    std::cin>>q;
    while(q--){
      std::cin>>n>>a>>b;
      cpa = a;
      cpb = b/2;
      if(n==1){
        ans = a;
      }else{
        if(cpb<cpa){
          n%2==0 ? ans = b*(n/2) : ans = b*(n/2)+a; 
        }else{
        ans = a*n;
        }
      }
      std::cout<<ans<<'\n';
    }
}
