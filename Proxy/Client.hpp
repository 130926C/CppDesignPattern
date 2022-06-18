#ifndef _CLIENT_HPP_
#define _CLIENT_HPP_

#include <string>
#include <cstdio>
#include <memory>
#include <iostream>
#include "Service.hpp"

class TVManager{

public:
    explicit TVManager(std::shared_ptr<ThirdPartyTVLib>s){
        std::cout << &s << std::endl;
        service_ = s;
        std::cout << &service_ << std::endl;
        std::cout << &(*s) << " -> " << &(*service_) << std::endl;
    };

    void renderVideoPage(int id){
        std::string video_info = service_->getVideoInfo(id);
        printf("render page:%s\n", video_info.c_str());
        return ;
    }

    void renderListPanel(){
        std::string videos = service_->listVideos();
        printf("render list panel:%s\n", videos.c_str());
        return;
    }


private:
    std::shared_ptr<ThirdPartyTVLib> service_;
};

#endif 