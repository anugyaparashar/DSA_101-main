#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
    	int x,a=0,b=0,d=0,car,chef;
    	cin>>x;
    	
    	long ans=0;
    	char y;
        
    	for(int i=0;i<=13;i++){
    		cin>>y;
    
    		if(y=='C')
    		  a++;
    		else if(y=='N'){
    			b++;
    		}
    		else if(y=='D')
    		  d++;   
    	}
    	
    	car=2*a+d;
    	chef=2*b+d;
    	
    	if(car>chef){
    		ans=60*x;
    	}
    	else if(chef>car){
    		ans=40*x;
	
    	}
    	else
    	ans=55*x;
    	cout<<ans<<"\n";
}

return 0;
    	
    }