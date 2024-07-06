//compare i element to i+1 and print max value

#include <iostream>
using namespace std;

int main()
 {
int a;
cout<<"Enter the number of elements in an array: ";
cin>>a;

int arr[a];
for(int i=0;i<a;i++)
{
    cout<<"Enter the value of "<<i<<"-th index element: ";
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
