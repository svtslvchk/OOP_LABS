#include "functions.hpp"
#include <iostream>

std::string units(int n) {
    switch(n) {
        case 0: return "sıfır";  
        case 1: return "bir";
        case 2: return "iki";
        case 3: return "üç";
        case 4: return "dört";
        case 5: return "beş";
        case 6: return "altı";
        case 7: return "yedi";
        case 8: return "sekiz";
        case 9: return "dokuz";
        default: return "";
    }
}

std::string tens(int n) {
    switch(n) {
        case 1: return "on";
        case 2: return "yirmi";
        case 3: return "otuz";
        case 4: return "kırk";
        case 5: return "elli";
        case 6: return "altmış";
        case 7: return "yetmiş";
        case 8: return "seksen";
        case 9: return "doksan";
        default: return "";
    }
}

std::string getTurkishNumber(int n) {
    std::string res;
    if (n < 0 || n > 99) {
        res = "";
        return res;
    }

    if (n < 10) {
        res = units(n);
    } else {
        res = tens(n / 10);
        if (n % 10 != 0) {
            res += " " + units(n % 10);
        }
    }

    return res;
}