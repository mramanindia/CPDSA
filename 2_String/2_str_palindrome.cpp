 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    // Your	string p;
    	string p=s;
         int start=0,end=s.size();
        while(start<end)
        {
            swap(s[start],s[end-1]);
            start++;end--;
        }
        if(s==p)
        {
        	return 1;
		}
		else
		{
			return 0;
		} //code goes here
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
