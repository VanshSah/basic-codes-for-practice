#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    int i = l;
    int j = mid+1;
    int k = l;
    int b[r+1];
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for(i=l; i<=r; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    mergeSort(a, 0, n-1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
