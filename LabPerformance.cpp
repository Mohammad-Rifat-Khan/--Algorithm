#include <bits/stdc++.h>

using namespace std;


int bubblesort(int *a,int n)
{
    int k,i;
    for(k=0;k<n-1;k++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
               swap(a[i],a[i+1]);
            }
        }
    }
}
void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    cout<<p[i]<<endl;
}


int main()
{
    int n;
    cin>>n;

    int *a = new int[1000];
    ofstream fout;
    fout.open("2k.txt");
     ifstream fin("2k.txt");


    srand(time(0));
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000+1<<endl;
    }

   for(int i=0;i<n;i++)
   {
       fin>>a[i];
   }
   bubblesort(a,n);
   printlist(a,n);

    return 0;
}
