#include<stdio.h>
int binarysearch(int[],int,int);
int main()
{
        int a[10],n,i,key,result;
        printf("enter number of elements");
        scanf("%d", &n);
        printf("enter elements");
        for(i=0;i<n;i++)
        {
                scanf("%d", &a[i]);
        }
        printf("enter search value");
        scanf("%d", &key);
        result = binarysearch(a,n,key);
        if(result ==-1){
                printf("element not found");
        }
        else{
                printf("element found at %d", result+1);
}
}
int binarysearch(int a[], int n, int key)
{
        int high, low, mid;
        high = n-1;
        low = 0;
        while(low<=high)
        {
                mid = (low + high)/2;
                if(a[mid] ==key)
                        return mid;
                else if(a[mid]<key)
                        low = mid+1;
                else
                        high = mid-1;
        }
        return -1;
}
