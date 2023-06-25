#include<iostream>
using namespace std;
class set
{
    int n,a[10],i;
public:
    void input();
    void display();
    int largest();
};

void set::input(void)
{
    cout <<"how many elements ";
  cin>>n;
  cout<<"Enter the elements";
  for(i=0; i<=n-1; i++)
  cin>>a[i];
}
int set::largest (void)
{
  int max;
  for( i=0; i<=n-1; i++)
  {
 if(max<a[i])
max=a[i];
  }
  return max;
  }

void set::display(void)
{
    cout<<"largest value="<<largest();
}
int main()
{
    set k;
    k.input();
    k.display();
}
