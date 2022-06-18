#ifndef _KTNMODE_HPP_
#define _KTNMODE_HPP_

#include "Facility.hpp"

#include <memory>

class KTVMode{
public:
    KTVMode(){
        this->television = std::make_unique<Televsion>();
        this->light = std::make_unique<Light>();
        this->audio = std::make_unique<Audio>();
        this->dvdplayer = std::make_unique<DVDPlayer>();
    }

    void OnKTV(){
        this->light->off();
        this->audio->on();
        this->television->on();
        this->dvdplayer->on();
    }

    void OffKTV(){
        this->light->on();
        this->audio->off();
        this->television->off();
        this->dvdplayer->off();
    }

private:
    std::unique_ptr<Televsion> television;
    std::unique_ptr<Light> light;
    std::unique_ptr<Audio> audio;
    std::unique_ptr<DVDPlayer> dvdplayer;    
};


#endif 