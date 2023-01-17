#include <iostream>
#include "ModelMember.h"

int main() {
    InsertMember("Kurniawan");
    InsertMember("Aan");
    InsertMember("Nino");
    FindAllMember();
    cout<<"test find id member : "<<FindByIdMember(3)<<endl;
    cout<<"test find id member : "<<FindByIdMember(0);
    return 0;
}