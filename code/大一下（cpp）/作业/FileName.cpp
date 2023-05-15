#include<iostream>
using namespace std;
int main()
{
    int k,arr[100]={0},count=0;
    string ch;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    while (1)
    {
        cin >> ch;
        if(ch[0]=='E')
            break;
        
        if (count==arr[j]+1)
        {
            if (ch[0] == 'C')
                printf("JianDao\n");
            else if (ch[0] == 'J')
                printf("Bu\n");
            else if (ch[0] == 'B')
                printf("ChuiZi\n");
            if(arr[j+1]!=0)
            j++;
            else
                j=0;
            count=0;
            continue;
        }
        if (ch[0] == 'C')
            printf("Bu\n");
        else if (ch[0] == 'J')
            printf("ChuiZi\n");
        else if (ch[0] == 'B')
            printf("JianDao\n");
        count++;
    }
    return 0;
}
