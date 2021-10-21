// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        
        vector<int> v;
        float D = b*b -4*a*c;
        
        if(D<0){
            v.push_back(-1);
        }
        else{
            float x,y;
            x = floor((-b +sqrt(D))/(2*a));
            y = floor((-b -sqrt(D))/(2*a));
            if(x>=y){
                v.push_back(x);
                v.push_back(y);
            }
            else{
                v.push_back(y);
                v.push_back(x);
            }
        }
        return v;
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
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends