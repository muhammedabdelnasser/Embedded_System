#include <stdio.h>
#include <string.h>
#define MAX_SIZE    200

int main()
{
    unsigned char str[MAX_SIZE]= {0};
    int i;

    printf("\n<200 characters allowed after that will neglected>\nEnter a string: ");
    for( i= 0 ;i< MAX_SIZE ;i++ )
	{
		scanf("%c", &str[i]);
		if( str[i]== '\n' )
		{
			str[i]== '\0';
			break;
		}
	}

    for(i=0; str[i]!='\0'; ++i);
    printf("Reverse is    : ");
    for( i= i-2 ;i>= 0 ;i-- )
        printf("%c", str[i]);


    return 0;
}
