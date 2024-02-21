#include <iostream>

int main(int n, char* argStrings[]) {
    ::std::string argument = argStrings[1];
    ::std::cout<< argument<<::std::endl;

    if(argument == "0")
        return 0;
    else
        return 1;
}
