#include<stdio.h>
int main()
{
    int x, i, sum;
    while(1)
    {
        sum = 0;
        scanf("%d", &x);
        if(x == 0)
        {
            break;
        }
        if(x%2 != 0)
        {
            x += 1;
        }
        for(i=0; i<5; i++)
        {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
