#include "Input.hpp"

#include "iostream"
#include "../include/Output.hpp"

namespace console
{
    ::std::string getString()
    {
        ::std::string input;
        ::std::cin>>input;
        return input;
    }

    ::std::string prompt(::std::string query)
    {
        writeString(query);
        return getString();
    }
}

