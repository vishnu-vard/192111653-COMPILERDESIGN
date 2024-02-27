#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int c=0;
	int i;
	printf("enter the identifier to check valid or not:");
	scanf("%c",&s);
	if(s[0]=='_'|| s[0]>97 && s[0]<=122){
		for(i=0;i<strlen(s);i++){
			if(s[i]=='_'|| s[i]>=97 && s[i]<=122|| s[i]>=0 && s[i]<=9){
				c++;
				
			}
		}
	}
if(strlen(s)==c){
	printf("it is valid identifier:");
}
	else{
		printf("it is not valid identifier:");
	}
}
