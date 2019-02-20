#include<iostream>
#include<algorithm>
#include<vector>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int times = 0,t=0;
    long long int n = 0 , del = 0,ans = 0, a1 = 0, a2 = 0 ,all =0 ;
    std::vector<long long int> candys;
    std::cin>>times;
    t = times-2;
    while(times--){
      std::cin>>n;
      candys.emplace_back(n);
      all = all +n;
    }
    for(int i = 0; i <= t+1; i++){
      del = candys.at(i);
      all = all - del;
      candys.erase(candys.begin()+i);
     if(all%2==0){
        for(int y = 0;y<=t;y+=2){
          a1 = candys.at(y)+a1;
        }
        if(a1 == (all-a1)){
          ans++;
        }
        a1 =0;
        a2 = 0;
      }
      candys.insert(candys.begin()+i,del);
      all = all+del;
    }
    std::cout<<ans;
}
/*
1 2 3 4 5
1 2 3 5
2 3 4 5
1 2 4 5
1 2 3 5
1 2 3 4
*/
