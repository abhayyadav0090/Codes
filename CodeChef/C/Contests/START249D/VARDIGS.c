#include <stdio.h>

int main() {
	int num, first, last;
	printf("Enter the number: ");
	scanf("%d", &num);
	last=num%10;
	first=num/10;
    if(first==last) printf("No");
    else printf("Yes");
    return 0;
}

