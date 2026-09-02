#include<stdio.h>
 int main()
{
    int a = 10,i;
    printf("%d\n",++a);
    {
            int a = 20; //declares a brand new variable that happens to share the same name
        for(i=0;i<3;i++)
        {
            printf("%d ",a);//20�will�be�printed�3�times�since�it�is�the�local�value�of�a
        }
    }
    printf("\n%d",a);//11�will�be�printed�since�the�scope�of�a�=�20�is�ended.
}
