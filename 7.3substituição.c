#include <stdio.h>
#include <string.h>

int main (void)
{
 char str[100];
 char c1, c2;
 gets(str);
 scanf("%c %c", &c1, &c2);

 for(int i = 0; i < strlen(str);i++)
 {
	 if (str[i] == c1)
	 {
		 str[i] = c2;
		 break;
	 }
 }
 printf("%s", str);
}
	
	
