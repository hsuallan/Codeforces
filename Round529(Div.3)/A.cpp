#include<iostream>
#include<string>
#include<algorithm>
int main(){
  int len;
  int j = 0;
  std::string s;
  std::string result;
  std::cin>>len;
  std::cin>>s;
  for(int i = 0; j < len;i++)
  {
    j = i + j;
    result.append(s.substr(j,1));

  }
  std::cout<<result;
  return 0;
}
