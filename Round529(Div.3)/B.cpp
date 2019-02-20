#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
/*
 1 2 8 3 6


*/
int main()
{
  std::vector<int> v;
  int len = 0;
  int ans1 = 0, ans2 = 10000000;
  int in = 0;
  std::cin >> len;
  for (int i = 0; i < len; i++)
  {
    std::cin >> in;
    v.emplace_back(in);
  }
  std::sort(v.begin(), v.end());
  ans1 = v.at(len - 1) - v.at(1); // del = min
  ans2 = v.at(len - 2) - v.at(0); // del = max
  ans1 > ans2 ? std::cout << ans2 : std::cout << ans1;
}
