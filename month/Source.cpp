//9 task
#include <iostream>
int main() {
    int n;
    //Using a cycle with a post condition 'dp-while'
    //Since the months are constant, use the construction 'switch-case'
    do {
        std::cout << "Enter the month number" << std::endl;
        std::cin >> n;
        switch (n) {

        case 1: 
            std::cout << "January";
            break;
        case 2: 
            std::cout << "February";
            break;
        case 12:
            std::cout << "December";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4: 
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6: 
            std::cout << "June";
            break;
        case 7: 
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9: 
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 0:
            break;
        default:
            std::cout << "Error"; //if the number is not out of range (1-12), an error message will be displayed
        }
        std::cout << std::endl;
    } while (n != 0);
}