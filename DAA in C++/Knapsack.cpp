// 0/1 Knapsack problem using Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
}
int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max( val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1) );
}

int main()
{

    int weight[3],profit[3],i;
    cout<<"Enter the Number of items : ";
    cin>>i;
    cout<<"Enter the "<<i<<" items Profit : ";
    for (int i=0; i<3; i++)
    {
        cin>>profit[i];
    }
    cout<<"Enter the "<<i<<" items Weights : ";
    for (int i=0; i<3; i++)
    {
        cin>>weight[i];
    }
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout<<"The maximum value that can be obtained is : ";
    cout<<knapSack(W, weight, profit, n);
    return 0;
}
