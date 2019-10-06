#include<stdio.h>
int main(void)
{
	int k; char c;
	scanf("%d\n", &k);
	while(scanf("%c",&c)!=EOF)
	{
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	    {
	    	if(c>='A'&&c<='Z')
	    	c=(c-'A'+k)%26+'A';
	    	
			else if(c>='a'&&c<='z')
	    	c=(c-'a'+k)%26+'a';
		}
		printf("%c",c);
	}
	
	return 0;
}