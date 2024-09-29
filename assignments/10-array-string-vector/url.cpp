#include "url.h"

#include <iostream>
#include <string>

URL::URL(const std::string protocol, const std::string resource)
{
    this->protocol = protocol;
    this->resource = resource;
}

std::string URL::get_url() const
{
    return (this->protocol + "://" + this->resource);
}
