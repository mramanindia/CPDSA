// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
       sort(arr,arr+n);
       vector<int> vect;
       int count=1;
       for(int i=0;i<n;i++)
       {
          if(arr[i]==arr[i+1])
          {
              count++;
          }
          else
          {
              vect.push_back(count);
                count=1;
          }
        
          
       }
       int real=0;
       for(int i=0;i<vect.size();i++)
       {
           int go=n/k;
           if(vect[i]>go)
           {
               real++;
           }
       }
       return real;
       
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
