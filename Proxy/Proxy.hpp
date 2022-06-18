#ifndef _PROXY_HPP_
#define _PROXY_HPP_

#include "ServiceInterface.hpp"

#include <memory>

class CachedTVClass: public ThirdPartyTVLib{

public:
    explicit CachedTVClass(std::shared_ptr<ThirdPartyTVClass>service):
        list_cache_(""),
        video_cache_(""),
        need_reset_(false) {
            this->service_ = service;
        };

    void reset(){
        this->need_reset_ = true;
    };

    std::string listVideos() override{
        if (this->list_cache_ == "" || this->need_reset_){
            list_cache_ = service_->listVideos();
        }
        return this->list_cache_;
    };

    std::string getVideoInfo(int id) override{
        if (this->video_cache_ == "" || this->need_reset_){
            video_cache_ = service_->getVideoInfo(id);
        }
        return this->video_cache_;
    };

private:
    std::shared_ptr<ThirdPartyTVLib> service_;
    std::string list_cache_;
    std::string video_cache_;
    bool need_reset_;
};


#endif