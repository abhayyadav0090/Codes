#include <stdio.h>
int main() {
    int n,key;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){ printf("Found at %d\n",i); return 0; }
    }
    printf("Not found\n");
    return 0;
}
