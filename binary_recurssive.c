#include<stdio.h>
int binarysearch(int[], int, int, int, int);
int main(){
    int n, key, i, a[10], result;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the elements");
    for(i=0; i<n; i++){
    scanf("%d", &a[i]);
}
printf("enter the search value");
scanf("%d", &key);
result = binarysearch(a,n,key,0,n-1);
if(result == -1)
{
    printf("element not found");
}
else
{
    printf("element found at %d position", result+1);
}
}
int binarysearch(int a[], int n, int key, int low, int high)
{
int mid;
    if(low <= high)
{
    mid = (low + high)/2;
    if(a[mid] == key){
    return mid;
    }
    else if(a[mid]> key){
    return binarysearch(a,n,key,high,mid-1);
    }
    else if(a[mid]<key){
    return binarysearch(a,n,key,mid+1,low);
    return binarysearch(a,n,key,mid+1,low);
}
}
return -1;
}
