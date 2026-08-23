#include <stdio.h>
int main(){
    int n,pos,val;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[20];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position and value: ");
    scanf("%d%d",&pos,&val);

    pos--; // Adjusting for 0-based index

    for(int i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=val; n++;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
