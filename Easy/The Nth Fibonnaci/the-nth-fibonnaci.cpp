//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fib(int N){
        int prev1 = 1;
        int prev2 = 0;
        
        if(N==0)
            return prev2;
            
        for(int i=2;i<=N;i++)
        {
            int curr = (prev1 + prev2)%10;
            prev2 = prev1;
            prev1 = curr;
        }
        
        int lastDig = (prev1)%10;
        return lastDig;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends