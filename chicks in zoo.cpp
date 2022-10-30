class Solution {
public:
	long long int NoOfChicks(int n){
	     vector<long long> expire(n+6);
	    long long chickens = 1;
	    expire[6] = 1;
	    for(int i=1;i<n;i++){
	        if(i>=6) chickens-=expire[i];
	        expire[i+6] = (2*chickens);
	        chickens+=(2*chickens);
	    }
	    
	    return chickens;
	    
	}
};
