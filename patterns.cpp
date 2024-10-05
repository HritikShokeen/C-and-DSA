#include <iostream>
using namespace std;

int main(){
    // for (int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=4;i++){

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";

    //     }
    //     cout<<endl;
    // }

    
    // for (int i=4;i>=1;i--){
    //     for(int j=i;j>=1;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // for (int i=1;i<=4;i++){

    //     for(int j=1;j<=i;j++){
    //         cout<<j;

    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=4;i++){
    //     for(int j=4-i;j>=1;j--){
    //         cout<<" ";

    //     }
    //     for (int k=1;k<=i;k++){
    //         cout<<"*";

    //     }
    //     cout<<endl;
    // }


    // int count=1;

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }


    // char count='A';

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=4;i++){
        for (int j=1; j<=5;j++){
            if (i==1 || j==1 ||i==4||j==5){
                cout<<"*";
            }
            else {
                cout<<" ";
            }

        }
        cout<<endl;
    }



    

    return 0;
}