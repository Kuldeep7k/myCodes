#include<stdio.h>
float f(float x)
{
    return(x*x*x+x-1); // f(x)= x^3-4
}
float main()
{
    float a,b,c,d,e=0.001;
    int count=1,n;
    printf("Enter the values of a and b:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);

    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
        return;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        printf("Iteration No-%d    x=%f\n",count,c);
        count++;
        if(count==11)
        {
        break;
        }
    } while(fabs(f(c))>e);
    printf("\n The required solution is %f\n",c);

}
