// These are the assignment for the module.

#include <iostream>
#include <vector>


class url_builder{
    public:
        url_builder (std::string protocol,
        std::string resource) {
            this->protocol = protocol;
            this->resource = resource;
        }

        std::string get_url() {
            return protocol + "://" + resource;
        }

    private:
        std::string protocol;
        std::string resource;

};

int main (void) {
    std::cout << "Section 2: Module 10" << std::endl;

    std::vector<char> vHello{'h','e','l','l','o'};

    std::cout << "Vector: " << vHello.data() << std::endl;

    // Display the first and fourth elements of the vector
    std::cout << "First element of the vector: " << vHello[0] << std::endl;
    std::cout << "Fourth element of the vector: " << vHello[3] << std::endl;

    // Now, let's change the third element to a '6'
    vHello[2] = '6';
    std::cout << "Vector: " << vHello.data() << std::endl;

    // now let's do that with strings
    std::string sHello{"Hello"};
    std::cout << "String: " << sHello << std::endl;

    // Display the first and fifth characters of this string
    std::cout << "First character of the string: " << sHello[0] << std::endl;
    std::cout << "Fifth character of the string: " << sHello[4] << std::endl;
    // Change the fourth charcter to the letter 'b'
    sHello[3] = 'b';
    std::cout << "String: " << sHello << std::endl;

    // now print all the characters of the string in order.  I think this means let's iterate through
    // the string one character at a time, otherwise I would just print the entire string.  ;)
    std::cout << std::endl;

    for (auto c : sHello) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}