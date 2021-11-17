 #include<bits/stdc++.h>
using namespace std;
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merges(int arr[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i<n1 && j<n2) {
        if (L[i]<= R[j]) {
            arr[k]=L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void show(int A[], int size)
{
    for (int i=0;i<size;i++)
        cout<<A[i]<<" ";
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merges(arr,l,m,r);
}

int main()
{
    int arr[] = { 213,34,59,47,56,67,401,93,31,73 };
    int len=sizeof(arr)/sizeof(arr[0]);

    show(arr,len);
    cout<<endl;
    mergeSort(arr,0,len-1);

    show(arr,len);
    return 0;
}
