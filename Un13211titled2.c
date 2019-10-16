#include<stdio.h>
#include<string.h>
     main()
    {
      char s[20],a,b[20],d[20];
      int c,i,j=0,k=0,m;
      printf("Enter String: ");
      gets(s); 
      printf("Split from:  ");
    scanf("%c",&a);
      c=strlen(s);

    for(i=0;i<=c;i++)
      {
        if(s[i]!=a)
        {
          b[i]=s[i];
        }	
        else if(s[i]==a)
        {
          j=i;
          }	
      }
      for(i=j;i<=c;i++)
        {

          d[k]=s[i];
          k++;

    }
         printf("String before %c is : ",a);
        puts(b);
        printf("String after and including %c is : ",a);
        puts(d);

    }
