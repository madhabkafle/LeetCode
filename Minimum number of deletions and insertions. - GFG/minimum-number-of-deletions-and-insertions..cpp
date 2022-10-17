//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	   int n=str1.size();
	   int m=str2.size();
	   vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
	  int ans= fun(str1,str2,n,m,dp);
	  int diff= (n-ans)+(m-ans);
	  return diff;
	    
	}
	int fun(string str1, string str2, int n,int m,vector<vector<int>> &dp){
	    if(n<=0 || m<=0)return 0;
	    if(dp[n][m]!=-1)return dp[n][m];
	    if(str1[n-1]==str2[m-1])return 1+fun(str1,str2,n-1,m-1,dp);
	    
	    return dp[n][m]=max(fun(str1,str2,n-1,m,dp),fun(str1,str2,n,m-1,dp));
	    
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends