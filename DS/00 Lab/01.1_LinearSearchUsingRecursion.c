#include <stdio.h>
int searchRec(int arr[],int n,int key,int i){
    if(i>=n) return -1;
    if(arr[i]==key) return i;
    return searchRec(arr,n,key,i+1);
}
int main(){
    int n,key;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key: ");
    scanf("%d",&key);

    int pos=searchRec(arr,n,key,0);
    if(pos!=-1) printf("Found at %d\n",pos);
    else printf("Not found\n");
    return 0;
}
