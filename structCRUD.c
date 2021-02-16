#include <stdio.h>
#include<string.h>
struct emp{
    char id[10];
    char name[20];
    char address[50];
    
};
int main()
{
    struct emp emp1[3];
    char sid[10],sname[20],saddress[50];
    int flag=0;
    int sindex=0;
    printf("Enter 3 employee record id,name,address");
    for(int i=0;i<3;i++)
    {
        scanf("%s",emp1[i].id);
        scanf("%s",emp1[i].name);
        scanf("%s",emp1[i].address);
    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n",emp1[i].id);
        printf("%s\n",emp1[i].name);
        printf("%s\n",emp1[i].address);
    }
    
printf("Enter employee id to delete\n");
scanf("%s",sid);
for (int i = 0; i < 3; i++) {
if(strcmp(sid,emp1[i].id) == 0)
{
flag=1;
strcpy(emp1[i].id," ");
strcpy(emp1[i].name," ");
strcpy(emp1[i].address," ");
break;
 }
}
if(flag==1)
{
printf("Employee deleted \n");
}
else
printf("Employee with id %s not found \n",sid);
printf("-------Employees List ------- \n");
for (int i = 0; i < 3; i++)
{
printf("%s\t",emp1[i].id);
printf("%s\n",emp1[i].name);
}

printf("Enter emp id to update");
scanf("%s",sid);
for(int i=0;i<3;i++){
if(strcmp(sid,emp1[i].id)==0)
{
    flag=1;
    sindex=i;
    printf("enter new id,name,address");
    scanf("%s",sid);
    scanf("%s",sname);
    scanf("%s",saddress);
    strcpy(emp1[i].id,sid);
    strcpy(emp1[i].name,sname);
    strcpy(emp1[i].address,saddress);
    break;
}
}
if(flag==1){
    printf("employee updated");
}
else
    printf("employee not found");
for(int i=0;i<3;i++)
{
    printf("%s\n",emp1[i].id);
    printf("%s\n",emp1[i].name);
    printf("%s\n",emp1[i].address);
    
}





return 0;
    
}
© 2021 GitHub, Inc.
