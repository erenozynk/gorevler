#include<iostream>
int main(){
    int t;
    std::cout <<"Kac saniye?";
    std::cin >>t;
    int g = 9.80665;
    int x = (g * t* t)/2;
    std::cout << "Alinan yol:"<< x << std::endl;




}