#include <algorithm>
#include <stdio.h>

int main()
{
   double a[100005], hap=0;
   int n,k,i;
   scanf("%d %d",&n,&k);
   for(i=0; i<n;i++)
   {
       scanf("%lf",&a[i]);
   }
   std::sort(a,a+n);
   hap=0;
   for(i=k; i<n-k;i++)
   {
       hap+=a[i];
   }
   printf("%.2lf\n",(hap+0.000001)/(n-(k*2)));
   for(i=0; i<k; i++)
   {
       a[i]=a[k];
   }
   for(i=n-k; i<n;i++)
   {
       a[i]=a[n-k-1];
   }
   hap=0;
   for(i=0; i<n; i++)
   {
       hap+=a[i];
   }
   printf("%.2lf",(hap+0.000001)/n);
}
