#include<iostream>
using namespace std;

int main(){
  int s=0;
  int n =7;
  int index =0;
  int arr[n] = {1,2,3,4,8,7,6};
int maxi = arr[0];
  // for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
        if ( arr[j]> maxi){
          maxi = arr[j];
          index =j;
        }
      // }
    } 
    cout<<maxi<< endl;
    cout<<index<<" ";

}
