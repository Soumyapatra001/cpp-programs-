//compare i element to i+1 and print max value

#include <iostream>
using namespace std;

int main()
 {
int a;
cout<<"enter number of element: ";
cin>>a;

int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}

for(int i=0;i<a;i++)
{
    if(arr[i]>arr[i+1] )
    {
        arr[i+1]=arr[i];
    }
    cout<<arr[i]<<" ";
}


    return 0;
}