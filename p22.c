//Frequency of a number......
#include<stdio.h>
int main()
{
    int n,i=0,c=0,temp;
    printf("Enter a number :");
    scanf("%d",&n);
    temp = n;
    while (i<10)
    {
        while(n>0)
        {
            int dig = n%10;
            if(dig==i)
            {
                c += 1;
            }
            n /= 10;
        }
        printf("Count of %d is %d\n", i, c);
        c = 0;
        n = temp;
        i++;
    }
    return 0;
}
    
//if (f==0)
//{
//    printf("The frequency of of 0 is : %d ",c);
//}
//else if (f==1)
//{
//    printf("The frequency of of 1 is : %d ",c);
//}
// else if (f==2)
//{
//    printf("The frequency of of 2 is : %d ",c);
//}
// else if (f==3)
//{
//    printf("The frequency of of 3 is : %d ",c);
//}
// else if (f==4)
//{
//    printf("The frequency of of 4 is : %d ",c);
//}
// else if (f==5)
//{
//    printf("The frequency of of 5 is : %d ",c);
//}
// else if (f==6)
//{
//    printf("The frequency of of 6 is : %d ",c);
//}
// else if (f==7)
//{
//    printf("The frequency of of 7 is : %d ",c);
//}
// else if (f==8)
//{
//    printf("The frequency of of 8 is : %d ",c);
//}
// else if (f==9)
//{
//    printf("The frequency of of 9 is : %d ",c);
//}
//else
//{
//    printf("Invalid input");
//}
//return 0;
//