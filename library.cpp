#include "library.h"

void hello_world() {
   std::cout <<"Hello world!" << std::endl;
}

void say_something(){
   char message[128];
   std::cin.getline(message,sizeof(message));
}