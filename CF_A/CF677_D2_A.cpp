// https://codeforces.com/contest/677/problem/A
#include <stdio.h>
int main()
{
    int n, h, a;
    int tall = 0, midget = 0;
    scanf("%d %d", &n, &h);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
 
        if(a <= h)
        {
            midget++;
        }
        else
        {
            tall += 2;
        }
    }
    int sum = midget + tall;
    printf("%d\n", sum);
    return 0;
}
