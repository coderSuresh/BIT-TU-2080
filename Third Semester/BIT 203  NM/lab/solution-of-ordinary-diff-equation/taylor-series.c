#include<stdio.h>
#include<math.h>
int main()
{
 
    int x,i;
    int fact = 1,n;
    float sum=0;

    printf("\n\nEnter the value of x in the series :  ");
    scanf("%d",&x);

    printf("\nEnter the number of terms in the series  :   ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        fact = fact*i;
        sum = sum + (pow(x,i)/fact) ;
    }
    sum= sum +1; //Since series starts with 1
    printf("\nThe sum of the taylor series is :  %.2f\n\n",sum);
    return 0;
}
