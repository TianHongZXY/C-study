#include <stdio.h>
int main()
{	int n;
	int i;
	scanf("%d",&n);
	char s[n][20];
	for(i=0;i<n;i++){
	scanf("%s",s[i]);
		}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}
