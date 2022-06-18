#include "Contex.hpp"

void test(){
    ForumAccount account("TOMOCAT");
    account.writeNote(20);
    account.downloadFile(40);
    account.replyNote(100);
    account.writeNote(30);
}


int main(){

    test();

    return 0;
}