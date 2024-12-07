#include <iostream>

using namespace std;
///Question (1)
/*
int linearSearch( int *items , int size, int target){
    int arr[size]={-1};
    for(int i=0; i<size; i++){
        if(items[i]==target){
            cout<<"     "<<i;
        }
    }
    return *arr;
}

int main()
{
    int arrayy[6]={1,2,3,1,4,1};
    int result=linearSearch(arrayy,6,1);
    return 0;
}
*/
///Question (2)

int binarySearch( int *items , int size, int search)
{
   int start=0,end=size-1,mid=0;
   while(start<=end){
        mid=(start+end)/2;
        if(items[mid]==search){
            return mid;
        }
        else if(items[mid]>search){
            end=mid-1;
        }
        else if(items[mid]<search){
            start=mid+1;
        }
   }
   return -1;
}

int main()
{
    int arr[6]={1,2,3,4,8,7};
    binarySearch(arr,6,2)==-1? cout<<"Not Found":cout<<"Found index";
    return 0;
}



