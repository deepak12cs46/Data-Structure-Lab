#include<stdio.h>
main()
{
    FILE *fp;
    typedef struct shop
    {
        char item[20];
        int price;
        int quant;
        int totprice;
    }s;
    int num,i;
    s *p;
    p=(s *)malloc(4*sizeof(s));
    if(p==NULL)
        printf("memory allocation failed");
    fp=fopen("shop.txt","r");

    for(i=0;i<4;i++)
    {
        fscanf(fp,"%s %d %d",p[i].item,&p[i].price,&p[i].quant);
    }
     for(i=0;i<4;i++)
    {
        p[i].totprice=p[i].price*p[i].quant;
    }

     FILE *fo;
     fo=fopen("shopee.txt","w");

     for(i=0;i<4;i++)
    {
              fprintf(fo,"%s %d %d %d \n",p[i].item,p[i].price,p[i].quant,p[i].totprice);
    }

}
