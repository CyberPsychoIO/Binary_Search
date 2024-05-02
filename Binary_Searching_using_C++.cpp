#include<iostream>
using namespace std;
int BinarySearch(int arr[],int N,int element)
{
    int starting_point=0;
    int ending_point=N;
    while(starting_point<=ending_point)
    {
        int middle=(starting_point+ending_point)/2;
        if(arr[middle]==element)
          return middle;
        else if(arr[middle]>element)
          ending_point=middle-1;
        else
          starting_point=middle+1;
    }
    return -1;
}
int main()
{
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;
    int arr[N];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to search in the array: ";
    cin>>element;
    cout<<"Your desired  element is at index number: "<<BinarySearch(arr,N,element);
    return 0;
}
