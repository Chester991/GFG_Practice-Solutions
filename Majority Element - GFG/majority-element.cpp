//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
    int element = arr[0];
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;
        }
        else if(arr[i]!=element){
            count--;
        }
        if(count==0){
            element = arr[i+1];
            count = 0;
        }
    }
    int pos_ans;
    if(count>0){
        pos_ans = element;
    }
    else if(count<=0){
        return -1;
    }
    int cnt = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==pos_ans){
            cnt++;
        }
    }
    if(cnt>size/2){
        return pos_ans;
    }
    else{
        return -1;
    }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends