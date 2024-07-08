#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number of element: ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Enter value of index "<<i<<" ";
        cin>>arr[i];
    }
    int missvale=arr[0];
    for(int i=0;i<a;i++)
    {
       if(arr[i]==missvale)
       {
        missvale++;
       }else{
        cout<<"missing value is "<<missvale<<" at index no "<<i<<endl;
        break;
    }
    }
    

}