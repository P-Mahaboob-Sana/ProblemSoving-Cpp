#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {1,3,0,4,3,0,0,9,1,3}, i = 0, j = 0, k = 0, p;
    int n = sizeof(a) / sizeof(a[0]);
    int temp[10], zero[10], new_array[10];

    cout << "The original array is" << endl;
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    i = 0; // Reset i to 0 for reiteration

    while(i < n){
        if(a[i] == 0){
            zero[j] = a[i];
            j++;
        }
        else{
            temp[k] = a[i];
            k++;
        }
        i++;
    }

    // Assembling the array
    for(int m = 0; m < k; m++) {
        new_array[m] = temp[m];
    }

    cout << "\nNew array is" << endl;
    for(p = 0; p < k; p++){
        cout << new_array[p] << " ";
    }

    // Adding zeros to the end
    for(int m = 0; m < j; m++){
        new_array[k + m] = zero[m];
    }

    cout << "\nFinal array is" << endl;
    for(p = 0; p < n; p++){
        cout << new_array[p] << " ";
    }

    return 0;
}

