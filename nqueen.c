#include<stdio.h>
#include<conio.h>
#include<math.h>
int x[10];
int place(int k,int i) {
    int j;
    for(j=1;j<=k-1;k++) {
        if((x[j]==i)||(abs(x[j]-i)==abs(j-k))) {
            return 0;
        }
    }
    return 1;
}
int nqueen(int k,int n) {
    int i;
    for(i=1;i<=n;i++) {
        if (place(k,i)) {
            x[k]=i;
            if(k==n) {
                for(i=1;i<=n;i++) {
                    printf("%2d",x[i]);
                }
                printf("\n");
            }
        }
        else {
            nqueen(k+1,n);
        }
    }
    return 0;
}
int main() {
    int i;
    nqueen(1,4);
    getch();

    return 0;
}