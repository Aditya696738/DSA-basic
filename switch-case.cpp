#include <iostream>
int main(){
    int amount = 1450;
    int choice;
    std::cout << "choose how to split 1450:/n" << std::endl;
    std::cout << "1  100\n2   50\n3   20\n4   1\n" << std::endl;
    std::cout << "enter your choice b/w 1 - 4" <<"\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
       std::cout << "Number of 100 notes: " << amount/100 << std::endl;
        break;
    case 2:
       std::cout << "Number of 50 notes: " << amount/50 << std::endl;
        break;
    case 3:
       std::cout << "Number of 20 notes: " << amount/20 << std::endl;
        break;
    case 4:
       std::cout << "Number of 1 notes: " << amount/1 << std::endl;
        break;
    default:
    std::cout << "Invalid choice " << std::endl;
        break;
    } 
    return 0; 
}
