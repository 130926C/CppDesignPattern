#ifndef _SERVICEINTERFACE_HPP_
#define _SERVICEINTERFACE_HPP_

#include <string>

class ThirdPartyTVLib{

public:
    virtual std::string listVideos() = 0;   
    virtual std::string getVideoInfo(int id) = 0;
};

#endif