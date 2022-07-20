#include <stdio.h>
 
const int MAX = 100;
 
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\n%d", a[i]);
    }
}
 
 
 int LonNhat(int a[], int n){
    int GTlonnhat = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > GTlonnhat){
            GTlonnhat = a[i];
        }
    }
     printf("So lon nhat la: %d\n",GTlonnhat);
}


int NhoNhat(int a[], int n){
    int GTnhonhat = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < GTnhonhat){
            GTnhonhat = a[i];
        }
    }
    printf("So nho nhat la: %d\n",GTnhonhat);
    
}

void Tangdan(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    printf("\nMang sau khi sap xep tang:\n");
    XuatMang(a,n);
}

void Giamdan(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    printf("\nMang sau khi sap xep giam:\n");
    XuatMang(a,n);
}


int main(){
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======LON NHAT=====\n");
    LonNhat(arr, n);
    printf("\n======NHO NHAT=====\n");
    NhoNhat(arr, n);
    printf("\n======NHO DEN LON=====\n");
    Tangdan(arr, n);
    printf("\n======LON DEN NHO=====\n");
    Giamdan(arr, n);
}
