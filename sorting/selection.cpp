#include<iostream>
using namespace std;

int main(){
    int arr[] = {9,4,1,8,0};//arr declaration + initialization
    int n =  sizeof(arr)/sizeof(arr[0]);//size of an array

    for(int i = 0; i<n-1;i++){
        int minindex = i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex= j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}