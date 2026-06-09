#include<stdio.h>
int main()
{


int t;
scanf("%d",&t);

while (t--)
{


    int M1,M2,D;
    scanf("%d %d %d",&M1,&M2,&D);
    int new_days=(M1*D)/(M1+M2);
    int fewer_days=D-new_days;

    printf("%d\n",fewer_days);

}



    return 0;
}