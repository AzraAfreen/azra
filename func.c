#include <stdio.h>


void staticdemo()
{
    static int a=4;
    a=a+4;
    printf("the value of a a is %d\n",a);
}
int main()
{
    for(int i=0;i<=4;i++)
    {
        staticdemo();
         staticdemo();
          staticdemo();
           staticdemo();
    }

    return 0;
} 