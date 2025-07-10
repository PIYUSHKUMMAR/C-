#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int freq[100] = {0};
    for (int i = 0; i<n; i++){
        cin>>array[i];
    }
    for (int i=0;i<n;i++){
        freq[array[i]]++;
    }
    for (int i=0;i<100;i++){
        if(freq[i]>0){
            cout<< i << "="<< freq[i] << endl;
        }
    }
    return 0;
}