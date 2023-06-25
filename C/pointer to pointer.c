int main()
{
    int var = 7,*ptr1,**ptr2;
    ptr1 = &var;
    ptr2 = &ptr1;
    printf("Value of var = %d\n", var );
    printf("Value of var using single pointer = %u \n", *ptr1 );
    printf("Value of var using double pointer = %u \n", **ptr2);

    getch();
}
