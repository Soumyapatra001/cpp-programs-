#include <iostream>
using namespace std;
int main() {
     int sum;
    for(int i=0;i<4;i++) {
    int x;
    cout<<"Enetr your "<<i<<" number: ";
    cin>>x;
    if(x>0)
    {
        sum+=x;
    }else{
        cout<<"invalid input";
    }
    }
     if(sum %3==0 || sum %7==0 || sum %5==0)
        {
          cout<<"sum of the number is: ";
          cout<<sum;  
        }
    
    
    return 0;
}
