#include<iostream>
#include <algorithm>
#include <vector>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
  using namespace std;
 void merge_it(string arr[], int xtra[], int start, int mid, int endd)
{
    int n1, n2;
     n1 = mid - start +1;
    n2 = endd - mid;
     string arr_1[n1+1], arr_2[n2+1];
    int xtra_1[n1+1], xtra_2[n2+1];
    int i, j, k, maxx;
     maxx = max( n1, n2);
     for( i=0; i < maxx; i++)
    {
        if( n1 > i)
        {
            arr_1[i] = arr[start+i];
            xtra_1[i] = xtra[start+i];
        }
         if(n2 > i)
        {
            arr_2[i] = arr[mid+1+i];
            xtra_2[i] = xtra[mid+1+i];
        }
    }
     i=0;
    j=0;
    k=start;
     while(i<n1&&j<n2)
    {
        if(arr_1[i]<arr_2[j])
        {
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
        }
        else if(arr_1[i]==arr_2[j]&&xtra_1[i]<xtra_2[j])
        {
            xtra_1[i] = xtra_2[j];
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=arr_2[j];
            xtra[k]=xtra_2[j];
            j++;
            k++;
        }
    }
     while(i<n1)
    {
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
    }
   while(j<n2)
  {
            arr[k]=arr_2[j];
            xtra[k]=xtra_2[j];
            j++;
            k++;
  }
 }
  int divide( string arr[], int xtra[], int start, int endd)
{
    int mid=(start+endd)/2;
     if(start<endd)
    {
        divide(arr,xtra,start,mid);
        divide(arr,xtra,mid+1,endd);
         merge_it(arr,xtra,start,mid,endd);
    }
}
 void merge_ito(int arr[], string xtra[], int start, int mid, int endd)
{
    int n1, n2;
     n1 = mid - start +1;
    n2 = endd - mid;
     int arr_1[n1+1], arr_2[n2+1];
    string xtra_1[n1+1], xtra_2[n2+1];
    int i, j, k, maxx;
     maxx = max( n1, n2);
     for( i=0; i < maxx; i++)
    {
        if( n1 > i)
        {
            arr_1[i] = arr[start+i];
            xtra_1[i] = xtra[start+i];
        }
         if(n2 > i)
        {
            arr_2[i] = arr[mid+1+i];
            xtra_2[i] = xtra[mid+1+i];
        }
    }
     i=0;
    j=0;
    k=start;
     while(i<n1&&j<n2)
    {
        if(arr_1[i]>arr_2[j])
        {
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
        }
        else if(arr_1[i]==arr_2[j]&&xtra_1[i]<xtra_2[j])
        {
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=arr_2[j];
            xtra[k]=xtra_2[j];
            j++;
            k++;
        }
    }
     while(i<n1)
    {
            arr[k]=arr_1[i];
            xtra[k]=xtra_1[i];
            i++;
            k++;
    }
   while(j<n2)
  {
            arr[k]=arr_2[j];
            xtra[k]=xtra_2[j];
            j++;
            k++;
  }
 }
  int divideo( int arr[], string xtra[], int start, int endd)
{
    int mid=(start+endd)/2;
     if(start<endd)
    {
        divideo(arr,xtra,start,mid);
        divideo(arr,xtra,mid+1,endd);
         merge_ito(arr,xtra,start,mid,endd);
    }
}
  int main()
{
    ios::sync_with_stdio(false);
    int n, i, j;
     cin >>n;
      string ft[n+1],  str;
    int a, b=0, c, x=0, ff[n+1], ss[n+1], sd[n+1];
     for(i=0; i<n; i++)
    {
        cin >> str;
         ft[i] = str;//x1*a+c;
         sd[i] = i+1;//x2*a+c;
       }
      divide(ft,sd,0,n-1);
    divideo(sd,ft,0,n-1);
     for( i=0; i<n; i++)
        {
            if( i == 0 || sd[i] != sd[i-1] )
                cout << ft[i] << endl;
        }
  }