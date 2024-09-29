#ifndef URL_H
#define URL_H

#include <string>

class URL {
    private:
        std::string protocol;
        std::string resource;

    public:
        URL(const std::string protocol, const std::string resource);
        std::string get_url() const;
};

#endif // URL_H