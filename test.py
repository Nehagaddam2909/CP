def binary_search(l,ele,index_i):
    low=0
    k=-1
    high=len(l)-1
    while(low<=high):
        mid=(low+high)//2
        if(mid==index_i):
            low=mid+1
        else:
            if l[mid]==ele:
                k=mid
                break 
            elif l[mid]>ele:
                high=mid-1
            else:
                low=mid+1
    return k 
                