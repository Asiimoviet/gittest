#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> a = {1,2,3};
  
  for (int num : a) cout << num << " ";
  
  cout << endl;
  
  return 0;
}
