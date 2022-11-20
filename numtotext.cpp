#include <iostream>
int main(){
    int Num = 475;
    int Yuzler = Num / 100;
    int Onlar = (Num - Yuzler*100) / 10;
    int Birler = Num - Yuzler*100 - Onlar*10;
    switch (Yuzler){
        case 9:
            std::cout << "dokuzyuz";
            break;
        case 8:
            std::cout << "sekizyuz";
            break;
        case 7:
            std::cout << "yediyuz";
            break;
        case 6:
            std::cout << "altiyuz";
            break;
        case 5:
            std::cout << "besyuz";
            break;
        case 4:
            std::cout << "dortyuz";
            break;
        case 3:
            std::cout << "ucyuz";
            break;
        case 2:
            std::cout << "ikiyuz";
            break;
        case 1:
            std::cout << "yuz";
            break;
        case 0:
            std::cout << "";
            break;
        

    }
    switch (Onlar){
        case 9:
            std::cout << "doksan";
            break;
        case 8:
            std::cout << "seksen";
            break;
        case 7:
            std::cout << "yetmis";
            break;
        case 6:
            std::cout << "altmis";
            break;
        case 5:
            std::cout << "elli";
            break;
        case 4:
            std::cout << "kirk";
            break;
        case 3:
            std::cout << "otuz";
            break;
        case 2:
            std::cout << "yirmi";
            break;
        case 1:
            std::cout << "on";
            break;
        case 0:
            std::cout << "";
            break;
        

    }
    switch (Birler){
        case 9:
            std::cout << "dokuz";
            break;
        case 8:
            std::cout << "sekiz";
            break;
        case 7:
            std::cout << "yedi";
            break;
        case 6:
            std::cout << "alti";
            break;
        case 5:
            std::cout << "bes";
            break;
        case 4:
            std::cout << "dort";
            break;
        case 3:
            std::cout << "uc";
            break;
        case 2:
            std::cout << "iki";
            break;
        case 1:
            std::cout << "bir";
            break;
        case 0:
            std::cout << "sifir";
            break;
        

    }  
}