#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	char b[50];
	char command[150];

	printf("Enter the file you want to copy: ");
	gets(a);

	printf("Enter the location you want to copy the file in: ");
	gets(b);

	strcpy(command, "cp ");
	strcat(command, a);
	strcat(command, " ");
	strcat(command, b);

	system(command);

	return 0;

}
