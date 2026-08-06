#include <iostream>
#include <cstring>

struct hello_world
{
    std::string hello = "hello";
    std::string world = "world";

    std::string get_helloworld()
    {
        return hello + " " + world;
    }
};

int main() 
{
    hello_world hel;

    std::cout << hel.get_helloworld() << std::endl;

    return 0;
}