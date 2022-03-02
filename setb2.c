/*Given a file containing strings separated by space, where the first string is “child” and second
string is “Father”.
Write a program which finds number of grandchildren for any given string.*/







#include<stdio.h>
#include<string.h>
char name[10];
int flag =0;
struct family
{
	char child[10];
	char father[10];
}s[6];
void count_child(char *name)
{
	for(int j=1;j<6;j++)
	{
		if(strcmp(s[j].father,name)==0)
		{
			flag++;
			count_child(s[j].child);
		}
	}
}

void main()
{
	int i=1;
	FILE *fp;
	fp=fopen("family.txt","r");
	while(!feof(fp))
	{
		fscanf(fp, "%s",s[i].child);
		fscanf(fp, "%s",s[i].father);
		i++;
	}
	fclose(fp);
	printf("Enter name\n");
	scanf("%s",name);
	for(int p=1;p<6;p++)
	{
		if(strcmp(s[p].father, name)==0)
		{
			count_child(s[p].child);
		}
	}
	printf("%s has %d grandchildren\n",name,flag/2);
}
