#include <iostream>
#include <cmath>
#include <string>

template <typename T>
T add(T a, T b){
    return a + b;
}
template <typename T>
T Subtract(T a, T b){
    return a - b;
}
template <typename T>
T Multiply(T a, T b){
    return a * b;
}
template <typename T>
T Divide(T a, T b){
    if(b ==0){
        std:: cerr << "Error! Can't be divided by 0."
        exit(-1);
    }
    else{return a / b;
    }
}
double x;
double y;
std:: string operation;

int main(){
std:: cout << "Hello. Here is a calculator to help you solve simple math problems!" << std:: endl;

std:: cout << "Enter a number" << std:: endl;
std:: cin >> x;

std:: cout << "Choose your operation(Add(+), Subtract(-), Multiply(*) or Divide(/))" << std::endl;
std:: cin >> operation;

std:: cout << "Enter the second number" << '\n';
std:: cin >> y;

if(operation == "+"){
    std:: cout << "Result: " << add(x,y) << '\n';
} 
else if (operation == "-"){
    std:: cout << "Result: " << Subtract(x,y) << '\n';
}
else if (operation == "*"){
    std:: cout << "Result: " << Multiply(x,y) << '\n';
}
else if (operation == "/"){
    std:: cout << "Result: " << Divide(x,y) << '\n';
}
else { std:: cout << "Wrong! Invalid operation!" << '\n';}

return 0;
}
