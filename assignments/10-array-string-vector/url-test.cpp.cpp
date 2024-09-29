#include "url.h"

#include <iostream>
// Test the URL class

int main(void) {
    URL myURL("https", "www.google.com");
    // Now, test the URL builder class in my example.

    URL myUrl("https", "www.example.com");
    URL myUrl2("https", "www.google.com");

    std::cout << "URL1:" << myUrl.get_url() << std::endl;
    std::cout << "URL2:" << myUrl2.get_url() << std::endl;

}