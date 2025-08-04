
#include <iostream>
#include <climits>
/* int main(){
    int arr[5] = {1,2,3,4,5};
    std::cout << arr[0];
    //finding add of element of an array
    for(int i = 0; i < 5; i++){ 
        std::cout << "Add. of" << " " << arr[i] << " element - " << &arr[i] << std::endl;
    }
    return 0 ;
} */

// fun with array 

/* int main(){
     int arr[15] = {1,2};
     std::cout << arr[5];

     for(int i = 0; i < 15; i++){ 
       std::cout << "Add. of" << " " << arr[i] << " element - " << &arr[i] << std::endl;
   }

      return 0 ;
} */

/* int main(){

    int arr[14] = {1,4,5,6};

    int n = 14;

    for(int i = 0 ; i <=n ; i++){
        std::cout << arr[i] << " " ; 
    }

      return 0 ;           // --- output is [1 4 5 6 0 0 0 0 0 0 0 0 0 0 -680853399] 
} */

/* void print_array(int arr[] , int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " " ; 
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n);
    std::cout << std::endl;
    return 0;
}   */

// example 2

/* int totalnumber(int arr1[] , int n){

    int total = 0;
    for(int i = 0 ; i < n ; i++){
       total += arr1[i];
    }
    return total;
}

int main(){
    int arr1[5] = {12,43,21,3,5};
    int total = totalnumber(arr1 , 5);
    std::cout << total << " ";
    return 0;
} */

// example 3 ----------------> finding MIN AND MAX



/* int get_min(int arr[] , int n){
    int min = INT_MAX;
    for(int i = 0 ; i< n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int get_max(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n = 10;
    int arr[10] = {1, 2, 41, 55, 3, 21, 59, 32, 45, 32};
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "minimum value is - " << get_min(arr, n) << std::endl;
    std::cout << "maximum value is - " << get_max(arr, n) << std::endl;
    return 0;
} */

// size of array

/* int main(){
    int arrary[20] = {1,2,3,4,5};
    int arrsize = sizeof(arrary) / sizeof(arrary[20]);
    std::cout << "size of array is " << arrsize << std::endl;
    return 0;
} */
// output is 20 this is not a actual size of an array because we set a element limit is 20 but we pass only 5 element. 

// sum of al. element of an array

int  sumofelement(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    return sum ;
}
int main(){
    int n = 10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "sum is " << sumofelement(arr , n) << std::endl;
}