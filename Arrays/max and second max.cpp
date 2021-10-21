// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = 0, max2= -1;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
        int n = sizeOfArray;
        for(int i =1; i<n; i++){
            if(arr[i]>arr[max]){
                cout<<"Coming here"<<endl;
                 max2 = max;
                 max = i;
             }
             else if(arr[i]!=arr[max]){
                cout<<"here also"<<endl;
                 if(max2==-1 or arr[i]>arr[max2]){
                     max2 = i;
                 }
             }
         }
         vector<int> v;
         v.push_back(arr[max]);
        if(max2!=-1){
            v.push_back(arr[max2]);
         }
         else{
             v.push_back(max2);
         }  
         return v;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends