#include<stdio.h>
int main()
{
    char text[30];
    int i, a = 0;
    printf("\n\nEnter Text : ");
    gets(text);
    if(text[0]=='/' && text[1]=='/'){
    	printf("Correct");
	}
	else if(text[0]=='/' && text[1]=='*'){
		printf("Comment");
	}
	else {
		printf("Not a comment");
	}
    return 0;
}
