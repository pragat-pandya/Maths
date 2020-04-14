/***
Program calculates the standard deviation for given integer
values

Author: Pragat Padnya (@psp2103)
***/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    cout<<"Please enter the number of values: "<<endl;
    int n; cin>>n;
    cout<<"Please enter the elements separated by a space "<<endl;
    float arr[n];
    float mean = 0,sigma = 0;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        mean += arr[i];
    }
    mean = mean / n;
    for (int i = 0; i < n; i++) {
        sigma += (arr[i] - mean)*(arr[i] - mean);
    }
    cout<<sigma<<endl;
    sigma = sqrt(sigma / n);
    cout<<"Standard Deviation:  "<<setiosflags(ios::fixed)<<setprecision(4)<<sigma<<endl;
    return 0;
}
