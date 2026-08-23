#include <stdio.h>
int binRec(int arr[],int l,int h,int key){
    if(l>h) return -1;
    int mid=(l+h)/2;
    if(arr[mid]==key) return mid;
    if(arr[mid]<key) return binRec(arr,mid+1,h,key);
    return binRec(arr,l,mid-1,key);
}
int main(){
    int n,key;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key: ");
    scanf("%d",&key);

    int pos=binRec(arr,0,n-1,key);
    if(pos!=-1) printf("Found at %d\n",pos);
    else printf("Not found\n");
    return 0;
}
