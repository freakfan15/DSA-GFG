// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
    	ll c = pow(10,9) + 7;
    	cout<<c<<endl;
        return ( ( a % c ) + ( b % c ) ) %c ;
    }
};

// { Driver Code Starts.
int main() {
    
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputs.txt", "r", stdin);
    // for writing output to output.txt
    freopen("outputs.txt", "w", stdout);
    #endif

	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends