#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        
        int k=0;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
        if((prev^nums[i])!=0)
        {
            k++;
            prev=nums[i];
        }
        else 
        {
            int c=0;
            int temp=prev;
            for(int j=i+1;j<nums.size();j++)
            {
                c=prev^nums[j];
                //cout<<c<<endl;
                prev=nums[j];
                if(c!=0)
                   break;
            }
            if(c!=0)
            {
                nums[i]=prev;
                prev=temp;
                k++;
            }
            
        }
        cout<<k<<endl;
        }
        
    return k;
    }
    int main()
    {
        vector<int>v={1,1,2};
        int x=removeDuplicates(v);
        return 0;
    }