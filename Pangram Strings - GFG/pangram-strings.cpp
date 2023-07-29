//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isPanagram(string str)
	{
	    if(str.length()<26){
	        return 0;
	    }
	    str.erase(remove(str.begin(), str.end(), ' '), str.end());
	    str.erase(remove_if(str.begin(), str.end(), [](char c) {
        return !isalpha(c);}), str.end());

	    transform(str.begin(),str.end(),str.begin(),::tolower);
	    set<char>s;
	    for(auto i : str){
	        s.insert(i);
	    }
	    if(s.size()!=26){
	        return 0;
	    }
	    else{
	        return 1;
	    }
	}

};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends