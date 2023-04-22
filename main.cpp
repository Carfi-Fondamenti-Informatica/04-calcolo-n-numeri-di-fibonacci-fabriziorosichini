#include <iostream>
using namespace std;

int main() {
    int i=0, n=0, x1=0, x2=0, x3=0;
    x1=1;
    x2=1;
    x3=x1+x2;
    cin>>n;

    if (n>=2){
        cout<<x1<<endl<<x2<<endl;
        for (i=2; i<n; i++){
            x3=x1+x2;
            x1=x2;
            x2=x3;
            cout<<x3<<endl;
        }
    }else{
        cout<<"errore";
    }


    return 0;
}
