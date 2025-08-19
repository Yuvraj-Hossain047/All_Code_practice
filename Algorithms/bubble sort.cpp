#include<iostream>
using namespace std;

int main(){

int arr[]={5,3,2,4,1};
int a=5;


for(int i=0; i<a-1; i++){

    for(int j=0;j<a-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
}

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}


return 0;
}
