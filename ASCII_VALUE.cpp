//ASCII value of A string
#include <iostream>
using namespace std;
int main() {
  string s;
  int sum=0;
 cout<<"Enter a string: ";
  cin>>s;
  int size= s.length();
  for(int i=0;i<(size-1);i++)
  {
     sum = sum + abs((int)s[i] - (int)s[i+1]);
  }
  cout<<sum;
    return 0;
}