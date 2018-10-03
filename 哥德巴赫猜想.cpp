#include<stdio.h>
#include<math.h>

int IsPrime(unsigned long int n);

int main()
{
    unsigned long int a, b, m, x = 0;
    int r = 0;
    for(m=6;m>0;m+=2)
    {
        r = 0;
        x = m / 2;
        for(a=3;a<=x;a+=2)
        {
            b = m - a;
            if(IsPrime(a))
            {
                if(IsPrime(b))
                {
                    r = 1;
                    break;
                }
            }
        }
        if(r=0)
        {
            printf("Goldbach's WRONG!\n");
            printf("%ld is not match!\n",m);
            break;
        }
        printf("%ld = %ld + %ld\n",m,a,b);
    }
}

int IsPrime(unsigned long int n)
{
    unsigned long int i = 0;
    unsigned long int y = 0;
    y = sqrt((double)n);
    for(i=2;i<=y;++i)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

