#include <iostream>

int main(){

    char message[128];
    std::cout <<"Hello world" << std::endl;
    std::cin.getline(message,sizeof(message));

    return 0;
}