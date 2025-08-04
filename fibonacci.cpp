// fibonacci series
#include <iostream>

 int main(){

    int n;
    std::cout << "enter starting number"<< "\n";
    std::cin >> n ;
    int a = 0 , b = 1;

    std::cout << "Your Fibonacci series:\n";

    for(int i = 1 ; i <= n ; i++){

        std::cout << a << " ";
        int nextnumber = a + b;
        a = b;
        b = nextnumber;
    }
    return 0;
} 

// a function which return a n-th fibonaaci series

int fiboseries(int n){
    int a = 0 , b = 1;
    std::cout << "your fibonacci series :-  " ;
    for(int i = 1 ; i <= n ; i++){
        std::cout << a << " " ;
        int nxtnumber = a + b;
        a = b; 
        b = nxtnumber; 
    }
}
int main(){
    int n ; 
    std::cout << "Enter your desired number " << std::endl;
    std::cin >> n;
    
    std::cout << fiboseries(n) << std::endl;
    return 0;
}
