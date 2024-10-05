#include<iostream>
using namespace std;

int product(float a,float b){

    int mul=a*b;
    return mul;
}
bool is_Even(int a){
    if (a%2==0){
        return true;
        
    }
    else{
        return false;
    }
}

int fact(int a){
    int i=a;
    int prod=1;
    while (i>=1){
        prod=prod*i;
        i--;

    }
    return prod;
}


int reverse(int a){
    int reverse=0;
    while (a>0){

        
        int lastdig=a%10;
        reverse=(reverse*10)+lastdig;
        a=a/10;


    }

    return reverse;

}

bool palindrome(int a){
    if (a==reverse(a)) {
        return true;
    }
    else{
        return false;
    }
}

int largest(int a, int b, int c){
    if (a>b){
        if (a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if (b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){
   

   //writing a function to check if a number is palindrome or not
   cout<< char('A'+1);
    
    
        
        
return 0;       }









   
   


    







    

