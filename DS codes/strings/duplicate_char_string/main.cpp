#include <iostream>
#include <bits/stdc++.h>
#define CH_NO 256

using namespace std;

class dup_char
{
public:
    void char_count(char *str, int *cnt)
    {
        for(int i=0; *(str+i);i++)
            cnt[*(str+i)]++;
    }

    void display_dup(char *str)
    {
        int *cnt = (int *)calloc(CH_NO,sizeof(int));
        char_count(str,cnt);

        for(int i=0;i<CH_NO;i++)
            if(cnt[i]>1)
            printf("%c,count = %d\n",i,cnt[i]);
        free(cnt);
    }
};
int main()
{
    dup_char dp1;
    char str[]="test string";
    dp1.display_dup(str);
    return 0;
}
