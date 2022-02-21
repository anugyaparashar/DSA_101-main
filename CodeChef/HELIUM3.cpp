#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
    	int a,b,x,y;
    	cin>>a>>b>>x>>y;
    	if(a*b<=x*y)
    	 cout<<"yes"<<"\n";
    	else
    	  cout<<"no"<<"\n";
    }
    return 0;}