#include <stdio.h>

int main(){
    int n,i,category;
    int regular=0,premium=0,recliner=0;
    int total=0;
    float discount;
    float finalamount;
    printf("enter number of tickets:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter category of ticket %d(1/2/3):",i);
        scanf("%d",&category);
        if(category==1)
        {
            total=total+150;
            regular++;
        }
        else if(category==2)
        {
            total=total+250;
            premium++;
        }
        else if(category==3)
        {
            total=total+400;
        recliner++;
        }
    }
    if(n>=5)
    {
        discount=total*0.10;
        finalamount=total-discount;
    }
    else
    {
        finalamount=total;
    }
    printf("--------FINAL BILL---------\n");
    printf("regular tickets:%d\n",regular);
    printf("premium tickets:%d\n",premium);
    printf("recliner tickets:%d\n",recliner);
    printf("total:%d\n",total);

    if (n>=5)
    printf("discount appiled:Yes\n");
    else
    printf("discount appiled:No\n");
    printf("final amount:%f\n",finalamount);
    return 0;
}


          

