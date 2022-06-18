#ifndef _SERVICE_HPP_
#define _SERVICE_HPP_


#include <string>
#include "ServiceInterface.hpp"

class ThirdPartyTVClass : public ThirdPartyTVLib{

public:
    std::string listVideos() override{
        return "video list";
    }

    std::string getVideoInfo(int id) override{
        return "video info";
    }

};


#endif