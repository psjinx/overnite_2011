#include<iostream.h>
#include<conio.h>
int gcd(int a, int b)
{
  if (b==0)
    return a;
  else
    return gcd(b,a%b);
}
void main()
{
clrscr();
long int noline,a[50],b[50],ans[50],i;
cout<<"Enter no of line";
cin>>noline;
for(i=0;i<noline;i++)
{
cout<<"Enter value of A&B";
cin>>a[i]>>b[i];
if((a[i]>=0&&a[i]<=40000)&&(b[i]>=a[i]&&b[i]<=10^250))
ans[i]=gcd(a[i],b[i]);
else
{cout<<"\n Enter valid number and try again";
getch();
goto end;
}
}
for(i=0;i<noline;i++)
cout<<ans[i]<<"\n";
getch();
end:
}