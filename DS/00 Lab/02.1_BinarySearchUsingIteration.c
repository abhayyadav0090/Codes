#include <stdio.h>
int main(){
    int n,key;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key: ");
    scanf("%d",&key);

    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){ printf("Found at %d\n",mid); return 0; }
        if(arr[mid]<key) l=mid+1; else h=mid-1;
    }
    printf("Not found\n");
    return 0;
}
