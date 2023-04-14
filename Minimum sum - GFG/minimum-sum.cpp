//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
       // string ans="";
        sort(arr, arr+n);
        string a="";
        string b="";
        for(int i=0; i<n; i+=2){
            a+=to_string(arr[i]);
            
        }
        for(int i=1; i<n; i+=2){
            b+=to_string(arr[i]);
            
        }
        int carry=0;
        string ans="";
        int x=a.size()-1;
        int y=b.size()-1;
        
        while(x>=0 && y>=0){
            int sum=0;
            sum+=(a[x]-'0')+(b[y]-'0')+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            x--;
            y--;
            
            
            
        }
        while(x>=0){
            int sum=0;
             sum+=(a[x]-'0')+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            x--;
        
        }
        while(y>=0){
            int sum=0;
             sum+=(b[y]-'0')+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            y--;
        }
        if(carry!=0){
            ans+=to_string(carry);
            
        }
        while(ans.size()>0 && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends