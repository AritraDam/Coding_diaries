//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int LCS(string s1,string s2)
    {
        int t[s1.length()+1][s2.length()+1];
        for(int i=0;i<=s1.length();i++)
            t[i][0] = 0;
        for(int i=0;i<=s2.length();i++)
            t[0][i] = 0;
        for(int i=1;i<=s1.length();i++)
        {
            for(int j=1;j<=s2.length();j++)
            {
                if(s1[i-1]==s2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
                
        }
        return t[s1.length()][s2.length()];
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        return X.length()+Y.length()-LCS(X,Y);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends