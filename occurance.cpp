//First and Last position of an Element  in sorted array.
#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int ans=-1,s=0, e = size-1;
    int mid = s+ (e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
        ans = mid;
        e = mid-1;
    }
    else if(key>arr[mid]){
        // right m jao;
        s= mid +1;
    }
    else if(key<arr[mid]){
        s = mid - 1;
    }
    mid = s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int ans=-1,s=0, e = size-1;
    int mid = s+ (e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
        ans = mid;
        s = mid+1;
    }
    else if(key>arr[mid]){
        // right m jao;
        s= mid +1;
    }
    else if(key<arr[mid]){
        e = mid - 1;
    }
    mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[]={1,2,3,3,3,4,5,8};
    int odd[]={1,4,5,5,5,6,7};
    cout<<"First occurance of 9 is "<<firstOcc(even,8,9)<<endl;
    cout<<"Last occurance of 9 is "<<lastOcc(even,8,9)<<endl;
    cout<<"First occurance of 2 is "<<firstOcc(even,8,7)<<endl;
    cout<<"Last occurance of 2 is "<<lastOcc(even,8,7)<<endl;
}