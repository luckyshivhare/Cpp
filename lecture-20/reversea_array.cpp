#include <iostream>
using namespace std;

// int main() {
//     int arr[] = {3, 4, 5, 6, 7};

//     int s = 0;
//     int e = 4;   // Last index

//     while (s <= e) {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// cout<<"REVERSE ARRAY";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//METHOD 2
int main(){
   int n =5;
    int arr[5] = {4,5,7,9,6};
    int s =0;
    int e =n-1;

for(int i=0;i<n;i++){
    if(s<=e){
        swap(arr[s] ,arr[e]);
        s++;
        e--;
    }
}
cout<<"REVERSE ARRAY";
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}

return 0;
}