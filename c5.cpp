#include<iostream>
using namespace std;
// ham nhap mang
void input_arg ( int a[], int n )
{
       for ( int i  = 0 ; i < n ; i++)
       {
            cout<< " a [ " << i << " ] = ";
            cin>>a[i];
       }
       
}
// ham in mang
void output_arg ( int a[], int n )
{
     for ( int i = 0 ; i < n ; i++)
     {
            cout<< a[i] << "  ";
    }
}
// ham tim kiem
void  tim ( int a[], int n , int x )
{
    int dem = 0;
    cout << "\n nhap gia tri can tim x = ";
    cin  >> x;
    for ( int i = 0 ; i < n ; i++)
    {
        if ( a[i] == x )
        {  
            cout<< "  \nphan tu  " << x << " co o trong phan tu cua mang o vi tri " <<  i+1 ;
           
        }
    }
 
 
}
// ham main
int main()
{
       int a[30], n ,x;
       cout<<" \nnhap n = ";
       cin>>n;
       input_arg( a, n );
       cout<<"\n mang vua nhap la : ";
       output_arg (a , n);
       tim (a , n , x);
       cout<<endl;
       system ("pause");
       return 0;
   }
