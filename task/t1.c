#include<stdio.h>
#include<string.h>


int main()
{

    printf("USER MANAGER SYSTEM \n");
    printf("CHOOSE ONE OPTION FROM THE OPTIONS \n");
    printf("[1]Add user-Delete user \n");
    printf("[2]Add Groups-Delete grops \n");
    printf("[3]change information of user \n");
    printf("[4]change password \n");
    printf("[5]Assign users to specific groups \n");

    printf("your choose: ");
    char command[150];
    char y[50];
    int i,c;
    gets(i);



    
    if(i==1){
        printf("[1]add user \n");
        printf("[2]delete user \n");
        printf("your chosse: ");
        gets (c);
        if(c==1){
            
            printf("Enter the new user name \n");
            printf("name: ");
            gets(y);

            strcpy(command, "su - ");
            strcpy(command, y);
            system(command);
		}
	}
}	

