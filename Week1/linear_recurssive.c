#include<stdio.h>
int linearsearch(int[],int,int,int);
int main()
{
        int n, arr[10], key, result ,i;
        printf("enter the number of elements");
        scanf("%d", &n);
        printf("\n enter the elements");
        for(i=0; i<n; i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("\n enter the element to find");
        scanf("%d", &key);
        result= linearsearch(arr,n,key,0);
        if(result != -1)
        {
                printf("\n element found at %d position",result+1);
        }
        else
                printf("\n element not found");
}
int linearsearch(int arr[], int n, int key, int pos)
{
        if(pos>=n)
                return 0;
        else if(arr[pos]==key)
        {
                return pos;
        }
        else
        {
                return linearsearch(arr,n,key,pos+1);
        }
        //return -1;
}

                                                                                                                            1,1           Top

