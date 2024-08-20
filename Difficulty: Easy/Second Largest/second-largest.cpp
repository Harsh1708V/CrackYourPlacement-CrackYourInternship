//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int max = *max_element(arr.begin(),arr.end());
        int secmax = 0;
        if (n<2){
            return -1;
        }
        for (int i = 0 ; i<n ; i++){
            if (max!=arr[i] && arr[i]>secmax){
                secmax = arr[i];
            }
        }
        if (secmax == max){
            return -1;
        }
        return secmax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends