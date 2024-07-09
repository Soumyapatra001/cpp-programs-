// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int deffirence;
    int a;
    cout<<"ENTER NO OF ELEMENT IN AN ARRAY: ";
    cin>>a;
int arr[a];
for(int i=0;i<a;i++) 
{
    cout<<"INDEX "<<i<<" VALUE IS: ";
    cin>>arr[i];
}
 int max=arr[0];
 int min=arr[0];
for(int k=0;k<a;k++)
{
    if(max<arr[k])
    {
        max=arr[k];
    }
     if(min>arr[k])
    {
        min=arr[k];
    }
}
cout<<"MAX ELEMENT IN AN ARRAY IS: "<<max<<endl;
cout<<"MIN ELEMENT IN AN ARRAY IS: "<<min<<endl;
deffirence=max-min;
cout<<"DEFFIRENCE BETWEEN MAX AND MIN ELEMENT IN AN ARRAY IS: "<<deffirence<<endl;
    return 0;
}