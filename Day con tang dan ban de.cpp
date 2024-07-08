#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max, m = 0;
    cin >> n;
    int a[n], f[1000];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    f[0] = 0;

    for(int i = 0; i < n; i++){
        max = 0;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j] and max < f[j]){
                max = f[j];
            }
        }
        f[i] = max + 1;
    }

    for(int i = 0; i < n; i++){
        if(m < f[i])
            m =  f[i];
    }

    cout << m;
    return 0;
}
