#include<iostream>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr[8]={1,2,3,1,4,2,4,5};
    print(arr,8);
}