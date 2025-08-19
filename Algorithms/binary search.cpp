#include<iostream>
using namespace std;

int binary(int arr[], int s, int f){

    int lb=0;
    int ub=s-1;

    while(lb<=ub){
        int mid=(lb+ub)/2;

        if(arr[mid]==f){
            return mid;
        }
        else if(arr[mid]>f){
            ub=mid-1;
        }
        else if(arr[mid]<f){
            lb=mid+1;
        }
    }
    return -1;
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int s=10, f=10;

    int index= binary(arr,s,f);

    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at position: "<<index+1;
    }
    return 0;
}
