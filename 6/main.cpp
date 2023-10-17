#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{ //Ввод графа вручную
    /*int n;
    int b[n][n];
    cout<<"Enter number of vertices of graph\n";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"Enter length from "<<i+1<<" to "<<j+1<<"\n";
            cin>>b[i][j];
        }
    }*/

    // Граф из индивидуального варианта

    int a[10][10]={{0,3,4,2,1000,1000,1000,1000,1000,1000},
                   {1000,0,1000,1000,1000,3,1000,1000,1000,1000},
                   {1000,1000,0,1000,1000,6,1000,1000,1000,1000},
                   {1000,1000,1000,0,5,2,1000,1000,1000,1000},
                   {1000,1000,1000,1000,0,1000,6,1000,12,1000},
                   {1000,1000,1000,1000,1,0,8,7,1000,1000},
                   {1000,1000,1000,1000,1000,1000,0,1000,1000,4},
                   {1000,1000,1000,1000,1000,1000,1000,0,1000,3},
                   {1000,1000,1000,1000,1000,1000,1000,6,0,11},
                   {1000,1000,1000,1000,1000,1000,1000,1000,1000,0}};
    int n=10;
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
    int p1,p2;
    cout<<"Enter department punkt: ";
    cin>>p1;
    cout<<"\nEnter destination punkt: ";
    cin>>p2;
    if (a[p1-1][p2-1]>=1000){
        cout<<"\nNo such way!";
    }
    cout<<"\nShortest way from "<<p1<<" to "<<p2<<" is "<<a[p1-1][p2-1];
    return 0;
}
