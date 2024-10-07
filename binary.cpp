#include <iostream>
using namespace std;


    int binToDec(int bin){
        int dec=0;
        int pow=1;

        while (bin>0){
            int lastdigit=bin%10;
            dec+=lastdigit*pow;
            bin=bin/10;
            pow=pow*2;
            
        }
        return dec;




    }


    int dectobin(int dec){
        int bin=0;
        int pow=1;

        while (dec>0){
            int lastdig=dec%2;
            bin=bin+lastdig*pow;
           
            pow=pow*10;
            dec=dec/2;




        }
        return bin;
    }
int main(){
    //write the code to conver binary to decimal
    int n;
    cout<<"Enter the decimal number to convert to binary: ";
    cin>>n;

    int b=dectobin(n);
    cout<<b;








    return 0;
}