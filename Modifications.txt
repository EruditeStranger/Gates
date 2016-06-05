#include<stdio.h>

#include<conio.h>

int main()

{

            int i,j,n,a[50],b[50],s[50],ch=0;

            

            loop1:

                        printf("\n\t1) INSERTING RECORDS.\n");

                        printf("\t2) IMPLEMENT GATE < AND >.\n");

                        printf("\t3) IMPLEMENT GATE < OR >.\n");

                        printf("\t4) IMPLEMENT GATE < NOT >.\n");

                        printf("\t5) IMPLEMENT GATE < NAND >.\n");

                        printf("\t6) IMPLEMENT GATE < NOR >.\n");

                        printf("\t7) IMPLEMENT GATE < XOR >.\n");

                        printf("\t8) EXIT FROM THE PROGRAM.\n");

                        printf("\n\nPLEASE ENTER YOUR CHOICE:");

                        scanf("%d",&ch);

 

                        switch(ch)

                        {

                                    case 1:


                                                            printf("Enter the value of n:");

                                                            scanf("%d",&n);

 

                                                            printf("\n value of n=%d",n);

                                                            for(i=1;i<=n;i++)

                                                            {

                                                               printf("\nENTER VALUE OF A[%d]=",i);

                                                               scanf("%d",&a[i]);

                                                            }

 

                                                            for(i=1;i<=n;i++)

                                                            {

                                                               printf("\nENTER VALUE OF B[%d]=",i);

                                                               scanf("%d",&b[i]);

                                                            }

 

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]>1 || b[i]>1)

                                                                        {


                                                                                    printf("\n ENTER DATA BETWEEN 0 AND 1");

                                                                                    goto loop1;

                                                                        }

                                                            }

 

                                                           

                                                            printf("\n*******************************\n");

                                                            printf("\n VALUE OF A \t VALUE OF B\n");

                                                            printf("\n*******************************\n");

                                                            for(i=1;i<=n;i++)

                                                                        printf("\n\t%d\t\t%d",a[i],b[i]);

                                                            printf("\n\n*****************************\n\n");

 

                                                            goto loop1;

 

                                    case 2:

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]==1 && b[i]==1)

                                                                                    s[i]=1;

                                                                         else

                                                                                    s[i]=0;

                                                             }

                                                             printf("\n******************************\n");

                                                             printf("\n\tA\tB\tAND\n");

                                                             printf("\n******************************\n");

                                                             for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                             printf("\n\n******************************\n");

                                                             goto loop1;

 

                                    case 3:

                                                          

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]==0 && b[i]==0)

                                                                                    s[i]=0;

                                                                         else

                                                                                    s[i]=1;

                                                             }

                                                             printf("\n******************************\n");

                                                             printf("\n\tA\tB\tOR\n");

                                                             printf("\n******************************\n");

                                                             for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                             printf("\n\n******************************\n\n");

                                                             goto loop1;

 

                                    case 4:


                                                            printf("\n**********************************************\n");

                                                            printf("\n BEFORE OPERATING THE 'NOT' VALUE OF A IS :\n");

                                                            printf("\n**********************************************\n\n");

                                                            printf("\tA\n");

                                                            printf("\n**********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d",a[i]);

                                                            printf("\n\n**********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]==1)

                                                                                    s[i]=0;

                                                                        else

                                                                                    s[i]=1;

                                                             }

 

                                                             printf("\n AFTER OPERATING THE NOT VALUE OF A IS :\n");

                                                             printf("\n*********************************************\n");

                                                             printf("\n\tNOT A\n");

                                                             printf("\n*********************************************\n");

                                                             for(i=1;i<=n;i++)

                                                                         printf("\n\t%d",s[i]);

                                                             printf("\n\n*********************************************\n\n");

                                                             goto loop1;

 

                                    case 5:

                                                            
                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]==1 && b[i]==1)

                                                                                    s[i]=1;

                                                                         else

                                                                                    s[i]=0;

                                                             }

                                                            printf("\n***********************************************\n");

                                                            printf("\nBEFORE OPERATING THE 'NOT AND'VALUE OF \n");

                                                            printf("\n***********************************************\n");

                                                            printf("\n\tA\tB\tS\n");

                                                            printf("\n***********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(s[i]==1)

                                                                                    s[i]=0;

                                                                        else

                                                                                    s[i]=1;

                                                             }

 

                                                             printf("\n AFTER OPERATING THE 'NOT AND' VALUE OF \n");

                                                             printf("\n**********************************************\n");

                                                             printf("\n\tA\tB\tNAND\n");

                                                             printf("\n**********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n\n");

                                                             goto loop1;

 

                                    case 6:


                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(a[i]==1 || b[i]==1)

                                                                                    s[i]=1;

                                                                         else

                                                                                    s[i]=0;

                                                             }

 

                                                            printf("\n***********************************************\n");

                                                            printf("\nBEFORE OPERATING THE 'NOT OR'VALUE OF \n");

                                                            printf("\n***********************************************\n");

                                                            printf("\n\tA\tB\tS\n");

                                                            printf("\n***********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if(s[i]==1)

                                                                                    s[i]=0;

                                                                        else

                                                                                    s[i]=1;

                                                             }

 

                                                             printf("\n AFTER OPERATING THE 'NOT OR' VALUE OF \n");

                                                             printf("\n**********************************************\n");

                                                             printf("\n\tA\tB\tNOR\n");

                                                             printf("\n**********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n\n");

                                                             goto loop1;

 

                                    case 7:

 

                                                       

                                                            printf("\n***********************************************\n");

                                                            printf("\nBEFORE OPERATING THE 'XOR'VALUE OF \n");

                                                            printf("\n***********************************************\n");

                                                            printf("\n\tA\tB\n");

                                                            printf("\n***********************************************\n\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                            {

                                                                        if((a[i]==0 && b[i]==0) || (a[i]==1 && b[i]==1))

                                                                                    s[i]=0;

                                                                        else

                                                                                    s[i]=1;

                                                             }

 

                                                             printf("\n AFTER OPERATING THE 'XOR' VALUE OF \n");

                                                             printf("\n**********************************************\n");

                                                             printf("\n\tA\tB\tXOR\n");

                                                             printf("\n**********************************************\n");

                                                            for(i=1;i<=n;i++)

                                                                         printf("\n\t%d\t%d\t%d",a[i],b[i],s[i]);

                                                            printf("\n\n***********************************************\n\n");

                                                             goto loop1;

 

                                   case 8: break;                                                          
 

                        }

            getch();
            return 0;

}