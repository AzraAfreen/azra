#include <stdio.h>
int main()
{ 
    int big;
    int *p;
    p=(int *) calloc(10,sizeof(int));
    printf("Enter the elements of array\n");
    for(int i=0;i<10;i++)
    scanf("%d",&p[i]);
    big=p[0];
    for(int i=0;i<10;i++)
    if(big<p[i])
    big=p[i];
    printf("The biggest element in the array is %d\n",big);
    return 0;
}
