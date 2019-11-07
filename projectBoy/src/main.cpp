#include <iostream>
#include "../include/Boy.h"
#include "../include/Dog.h"
#include <string>

int main() {
    Boy yair ("yair","3121465",25,"Anna","brown");
    std::cout<<yair.getName()<<std::endl;
    Dog barney("barny","blue");
    std::cout<<yair.getDog().getName()<<std::endl;
    return 0;
}