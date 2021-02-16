#include <stdio.h>
int a=10; //global scope
int main()
{
    int b=10; //local scope
    printf("the value of a is %d\n",a);
    scope(b);
    printf("the value of b is %d\n",b);
    return 0;
}
int scope()
{
    int b=12;
    prntf("the value of b is %d\n",b);
} 