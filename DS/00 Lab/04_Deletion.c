#include <stdio.h>
int main(){
    int n,pos;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[20];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position to delete: ");
    scanf("%d",&pos);

    pos--; // Adjusting for 0-based index

    for(int i=pos;i<n-1;i++) arr[i]=arr[i+1];
    n--;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
