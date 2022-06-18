#include "Client.hpp"
#include "Proxy.hpp"
#include "Service.hpp"

#include <memory>

int main(){

    std::shared_ptr<ThirdPartyTVClass> aTVService = std::make_shared<ThirdPartyTVClass>();
    std::shared_ptr<CachedTVClass> aTVProxy = std::make_shared<CachedTVClass>(aTVService);

    std::shared_ptr<TVManager> manager = std::make_shared<TVManager>(aTVProxy);

    manager->renderListPanel();
    manager->renderVideoPage(2);


    return 0;
}