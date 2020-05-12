// FANCY
#include <stdio.h> 
#include <string.h>
#define MAX 1000

int main()
{
	char s[MAX];
	int t,i,l;
	scanf("%d",&t);
	while(t--)
	{
		i=0;
		scanf("\n");
		scanf("%[^\n]s",s);
		l=strlen(s);
		while(i<l-2)
		{
			if((s[i]==' '&&s[i+1]=='n'&&s[i+2]=='o'&&s[i+3]=='t'&&(s[i+4]==' '||s[i+4]=='\0'))||(i==0&&s[i]=='n'&&s[i+1]=='o'&&s[i+2]=='t'&&(s[i+3]==' '||s[i+3]=='\0')))
			{
				printf("Real Fancy\n");
				break;
			}

			else i++;
		}	
		if(i==l-2)
		printf("regularly fancy\n");
	}	
return 0;	
}