//compare i element to i+1 and print max value

#include <iostream>
using namespace std;

int main()
 {
int a;
cout<<"Enter number of element in array: ";
cin>>a;

int arr[a];
for(int i=0;i<a;i++)
{
    cout<<"Enter "<<i<<"-th number element: ";
    cin>>arr[i]; //input elements in array
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
