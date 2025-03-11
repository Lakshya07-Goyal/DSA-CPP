#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==key)
   { return mid;}
   else if(arr[mid]>key){
    e=mid-1;}
    else{
        s=mid+1;}
        mid=s+(e-s)/2;
   }
   return -1;

}
int main(){
    int arr[6]={1,3,5,8,9,13};
    int brr[5]={1,5,8,9,16};
   int a=binarysearch(arr,6,8);
   int b=binarysearch(arr,5,7);
   cout<<a;
   cout<<endl;
   cout<<b;


}