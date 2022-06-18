#include "KTVMode.hpp"
#include "Facility.hpp"

#include <memory>

void test(){
    std::unique_ptr<KTVMode> kev = std::make_unique<KTVMode>();

    kev->OnKTV();
}

int main(){

    test();

    return 0;

}