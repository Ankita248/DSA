//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int l=arr.size(),f=0;
        for(int i=0;i<l-1;i++){
            if(arr[i]>arr[i+1]){
            return 0;
            }
        }
    
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(nums);
        cout << (ans ? "true" : "false") << endl;
    }
    return 0;
}

// } Driver Code Ends