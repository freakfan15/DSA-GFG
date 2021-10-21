/*
https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1
*/

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(), array.end());
        long long limit = array[0] + array[1];
        return limit--;
    } 
};


// { Driver Code Starts.

int main() 
{ 

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputs.txt", "r", stdin);
    // for writing output to output.txt
    freopen("outputs.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 
  // } Driver Code Ends