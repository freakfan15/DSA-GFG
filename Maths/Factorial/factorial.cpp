// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
       double fact = 0;
       for(int i =1; i<=N; i++){
            fact = fact + log10(i);
       }

       return floor(fact) + 1;
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

    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends