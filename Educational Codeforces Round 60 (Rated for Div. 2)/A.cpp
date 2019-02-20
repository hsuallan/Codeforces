#include<iostream>
#include<algorithm>
#include<vector>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0,element = 0,big = 0 ,s=0,r=0;
    std::vector<int> a; 
    std::cin>>n;
    while(n--){
      std::cin>>element;
      a.emplace_back(element);
      big = std::max(element,big);
    }
    std::for_each(a.begin(),a.end(),[&s,&r,big](int &x){
      if(x == big){
        s+=1;
      }
      else{
        r = std::max(r,s);
        s = 0;
      }
    });
    r = std::max(r,s);
    std::cout<<r;
}
