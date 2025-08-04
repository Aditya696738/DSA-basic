#include <iostream>
#include <cmath>

/* bool primecheck(int n){
    for(int i = 2;i< n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    std::cin >> n;
    if(primecheck(n)){
        std::cout<<"no. is prime" << std::endl;
    }
    else{
        std::cout<<"no. is not prime" << std::endl;
    }
    return 0; 
} */

// question 2

/* int nth_term(int n){
    int ans = 1;
   for(int i = 1 ; i <= n ; i++){
}
return ans = (3 * n + 7);
}
int main(){
    int n;
    std::cout<< "enter n: \n" ;
    std::cin >> n ;
    if(n > 0){
        std::cout << "your answer is - " << nth_term(n) << " " << std::endl;
    } else{
        std::cout << " choose the value of n in range (0 < n < (n-1))"<< std::endl;
    }
    return 0;
} */


// question 3 -----> check the number is even or odd 

/* bool iseven(int n){
    for(int i = 0 ; i<=n ; i++){
        if(n&1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n ;
    std::cout<< "enter number : " <<std::endl;
    std::cin >> n;

    if(iseven(n)){
        std::cout << "number is even"<<std::endl;
    }
    else{
        std::cout<<"number is odd" <<std::endl;
    }
    return 0; 
} */

// question 4 --------> find factorial of a number
/* int factorial(int n){
    int fact = 1;
    for(int i =1; i <=n ; i++){
        fact = fact * i;
    }
    return fact;
}
int ncr(int n , int r){
    int num = factorial(n);
    int denm = factorial(r) * factorial(n-r);
    int ans = num/denm;
    return ans;
}
int main(){
    int n, r ;
    std::cout << "enter n " << n << " or r " << r << std::endl;
    std::cin >> n >> r;
    std::cout << ncr(n ,r) << std::endl;
} */

