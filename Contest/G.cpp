#include <bits/stdc++.h>

int main(){

    long n; std::cin>>n;
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){std::cin>>a[p];}

    sort(a.begin(), a.end());
    long ind(0), mx(0);
    for(long p = 0; p < n; p++){
        while(a[ind] + 5 < a[p]){
          ++ind;
          }
        long cur = p - ind + 1; 
        mx = (mx > cur) ? mx : cur;
    }

    std::cout<<mx<<std::endl;

    return 0;
}
