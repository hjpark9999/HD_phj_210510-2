#include <stdio.h>

void main()
{
	char charArray[] = "My Name";

	char* ptr = charArray;
	ptr[0] = 'y';
	ptr[1] = 'o';

	printf("%s", ptr);

	fgetc(stdin);
}