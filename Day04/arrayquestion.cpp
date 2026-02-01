// Write a C++ program to find the average of an array of integers.


// #include <iostream>
// using namespace std;

// double average(int arr[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return (double)sum / n;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << average(arr, n) << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int PrefixSum(int arr[],int n,int q)
   { int sum=0;
    for(int i=0;i<q;i++)
    {
        sum+=arr[i];
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    return 0;
}