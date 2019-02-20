#include<iostream>
#include<algorithm>
#include<vector>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    long long int n = 0, m =0 , k = 0, t = 0 ,tm = 0;
    long long int large = 0,large2 = 0,a=0,ans = 0;
    std::vector<long long int> cards;
    std::cin>>n>>m>>k;
    while(n--){
      std::cin>>a;
      cards.emplace_back(a);
    }
    std::sort(cards.begin(),cards.end(),[](auto &y,auto &z){
      return y>z;
    });
    large = cards.at(0);
    large2 = cards.at(1);
    t = m/(k+1);
    tm = m%(k+1);
    ans = (large*k+large2)*(t)+large*tm;
    std::cout<<ans;
}
