//write a program to find min max elementes in an array alternatively in cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        }
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                }
                if(arr[i]>max)
                {
                    max=arr[i];
                    }
                    cout<<"min element is "<<min<<endl;
                    cout<<"max element is "<<max<<endl;
        }
        return 0;
}