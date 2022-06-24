long long n,q;
	    cin>>n;
	  
	    if(ceil(log2(n))==floor(log2(n)))
	    {
	        q=((ceil(log2(n)))+1);
            cout<<n-q;
	    }
	    else
	    {
	        q=ceil(log2(n));
            cout<<n-q<<endl;
	    }