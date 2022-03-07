def create():
    lst=list()
    return lst
def add_elements(l):
    for i in range(5,11):
        l.append(i)
    return l
def rev(l):
    return l[::-1]
def copy_lst(l):
    l1=list(l)
    for i in l1:
        print(i,end=" ")

lst=create()
lst=add_elements(lst)
lst=rev(lst)
copy_lst(lst)