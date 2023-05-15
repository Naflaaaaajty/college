#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int a;
    scanf("%d",&a);
    getchar();
    while(a)
    {
        ch[100]='0';
    	
        scanf("%s",ch[0]);
        getchar();
        int lc=strlen(ch);
        if(lc==0)
        {
            puts("No.");
        }
        if(ch[lc-1]=='?')
        {
           char *chh=strchr(ch,'P');
           if(chh==NULL)
           puts("No.");
           else if(chh[1]=='T' && chh[2]=='A')
                    puts("Yes!");
                else
                    puts("No.");
           
                    
                    
        }
        else
            puts("enen");
        a--;
    }
    
    return 0;
}
