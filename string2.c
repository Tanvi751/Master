#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    char newname[20];
    int i;
     printf("enter the name:\t");
     scanf("%s",name);
     
     for(i=0;i!='\0';i++)
     {
        scanf("%c",newname[i]);
     }
     printf("%d",strcmp(name,newname));
return 0;
}
