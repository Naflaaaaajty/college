#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char s[1000];
  int arr[100]={0};
  scanf("%s",s);
  int i=0;
  while(s[i])
  {
    arr[s[i++]-65]++;
  }
  int max=arr[i];
  for(i=1;i<99;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  int count;
  for(i=1;i<99;i++)
  {
    if(arr[i]==max)
    {
      count=i+65;
    }
  }
  printf("%c\n",count);
  printf("%d",max);
  return 0;
}
