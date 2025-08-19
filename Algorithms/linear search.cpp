#include<iostream>
using namespace std;

int linear(int arr[],int s,int f){
    for(int i=0;i<s;i++){
        if(arr[i]==f){
                return i;
        }
    }
return -1;
}
int main(){

    int arr[]={1,2,3,4,5};
    int s=5, f=4;

    int index =linear(arr,s,f);

    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at position "<<index+1;
    }
return 0;
}
