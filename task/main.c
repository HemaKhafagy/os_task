#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
again:
    printf("USER MANAGER SYSTEM \n");
    printf("CHOOSE ONE OPTION FROM THE OPTIONS \n");
    printf("[1]Add user-Delete user \n");
    printf("[2]Add Groups-Delete grops \n");
    printf("[3]change information of user \n");
    printf("[4]change password \n");
    printf("[5]Assign users to specific groups \n");
    printf("[6]exist \n");

    printf("your choose: ");
    int i;
    scanf("%d",&i);




    if(i==1){
        printf("[1]add user \n");
        printf("[2]delete user \n");
        int c;
        printf("your chosse: ");
        scanf("%d",&c);
        if(c==1){
            char command1[150];
            char str1[50];
            printf("Enter the new user name: ");
            scanf("%s",&str1);

            strcpy(command1, "sudo adduser ");
            strcat(command1, str1);
            system(command1);

        }else if(c==2){
            char command2[150];
            char str2[50];
            printf("Enter the username you want to delete: ");
            scanf("%s",&str2);

            strcpy(command2, "sudo deluser --remove-home ");
            strcat(command2, str2);
            system(command2);
        }

    }else if(i==2){
        printf("[1]add groups \n");
        printf("[2]delete groups \n");
        int k;
        printf("your chosse: ");
        scanf("%d",&k);
        if(k==1){
            char command3[150];
            char str3[50];
            char append[20];
            int id;

            printf("enter the id of the new group: ");
            scanf("%d",&id);
            printf("enter the name of new group: ");
            scanf("%s",&str3);

            strcpy(command3, "sudo groupadd -g ");
            sprintf(append,"%d",id);
            strcat(command3, append);
            strcat(command3, " ");
            strcat(command3, str3);
            system(command3);

        }else if(k==2){
            char command4[150];
            char str4[50];

            printf("enter the name fo group you want to remove: ");
            scanf("%s",&str4);

            strcpy(command4, "sudo groupdel ");
            strcat(command4, str4);
            system(command4);
        }

    } else if(i==3){
        int f;
        printf("what do you want to change \n");
        printf("[1]change the username of user \n");
        printf("[2]change info of a user by this password \n");
        printf("your choose: ");
        scanf("%d",&f);
            if(f==1){
            char command5[150];
            char str5[50];
            char str6[50];

            printf("enter the new username: ");
            scanf("%s",&str5);
            printf("enter the old username ");
            scanf("%s",&str6);

            strcpy(command5, "sudo usermod -l ");
            strcat(command5, str5);
            strcat(command5, " ");
            strcat(command5, str6);

            system(command5);
            }else if(f==2){
                    char command9[150];
                    strcpy(command9,"chfn");

                    system(command9);
            }

    } else if(i==4){
        char command6[150];
        char str10[50];

        printf("enter the username you want to change your password: ");
        scanf("%s",&str10);

        strcpy(command6, "sudo passwd ");
        strcat(command6, str10);

        system(command6);

    } else if(i==5){
        char command7[150];
        char str7[50];
        char str8[50];

        printf("enter the user you want to add to group: ");
        scanf("%s",&str7);
        printf("enter the group you want to add the user in: ");
        scanf("%s",&str8);

        strcpy(command7, "sudo adduser ");
        strcat(command7, str7);
        strcat(command7, " ");
        strcat(command7, str8);

        system(command7);

    }else{
        printf("we don't get correct choose");
    }
if(i==6){
        printf("\n press enter to close \n");
        return 0;
    }
    goto again;


    return 0;
}
