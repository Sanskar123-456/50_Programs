#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++; // Skip duplicates
                while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                left++; right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    for (auto triplet : res) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int sum,j;
//     int arr[]={-1,0,1,2,-1,-4};
//     // int arr[]={0,0,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-2;i++){
//         for(int j=i+1;j<n;j++){
//             sum=arr[i]+arr[j]+arr[j+1];
//             if(sum==0){
//             cout<<arr[i]<<" ";
//             cout<<arr[j]<<" ";
//             cout<<arr[j+1]<<" ";
//             cout<<endl;
//         }
//         }
//     }
// }