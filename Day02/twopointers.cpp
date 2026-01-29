// Day02 two pointers – test change

#include<iostream>
using namespace std;

int Sum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
// int main()
// {
//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<Sum(arr,n) <<endl;
//     return 0;
// }

// ------------ Day 2 two pointers 

// reverse an array
// #include<iostream>
// using namespace std;

// void ReverseArray(int arr[], int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int n=5;
//     int arr[]={10,20,30,40,50};
//     ReverseArray(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// two sum problem
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// int main() {
//     int n;
//     cin >> n;              // size of array

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];    // array elements
//     }

//     int target;
//     cin >> target;         // target sum

//     vector<int> ans = twoSum(nums, target);

//     cout << ans[0] << " " << ans[1] << endl;

//     return 0;
// }


// check if array is palindrome

#include<iostream>

using namespace std;

bool isBooleanPalindrome(int arr[], int n)
{
    int start=0;
    int end=n-1;// test change
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

