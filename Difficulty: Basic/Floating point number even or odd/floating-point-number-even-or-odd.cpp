//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    }
    return 0;
}
// } Driver Code Ends


bool isEven(string s,int n)
{
    int x=0;
   for(int i=0;i<n;i++){
       if(s[n-1-i] !='0' && s[n-1-i] !='.'){
           x=s[n-1-i];
           break;
       }
   }
    
    if(x&1) return false;
    else return true;
}