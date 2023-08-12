//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int count(int arr[], int n, int target) {
	    int count = 0;
	    int first = -1,last = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>=target){
                high = mid - 1;
                if(arr[mid]==target){
                    first = mid;
                }
            }
            else if(arr[mid]<target){
                low = mid + 1;
            }
        }
        low = 0;
        high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]<=target){
                low = mid + 1;
                if(arr[mid]==target){
                    last = mid;
                }
            }
            else if(arr[mid]>target){
                high = mid - 1;
            }
        }
        int ans = last - first + 1;
        if(first==-1 || last ==-1){
            return 0;
        }
        else{
            return ans;
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends