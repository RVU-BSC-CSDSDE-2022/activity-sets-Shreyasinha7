#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1,char *string2);
void output(char *string1, char *string2, int result);
void input_two_strings(char *string1, char *string2)
{
  printf("enter the string1");
  scanf("%s", string1);
  printf("enter the string2");
  scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{
  int result=0,i=0,flag=0;
  for(i=0; string1[i]!='\0' && string2[i]!='\0'; i++)
    {
      if(string1[i]!=string2[i])
      {
       flag=1;
        break;
      }
    }
  if(flag==0)
  {
    if(string1[i]=='\0'&& string2[i]=='\0')
      return 0;
    if(string1[i]=='\0')
      return 1;
    if(string2[i]=='\0')
      return 2;
  }
  if(flag==1)
  {
    if(string1[i]>string2[i])
      return 1;
    else return 2;
  }
}