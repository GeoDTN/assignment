#include <iostream>

#include "socialnetwork.h"

int main()
{
    SocialNetwork sn;
    sn.addUser("James",20,170,"male",{"","Tennis",""},1,{"John","Peter"} );
    sn.addUser("James",0,170,"male",{"","",""},2,{"Andrew","John"} );
    sn.addUser("Somano",20,170,"male",{"","",""},3,{"John","Tadewos"} );
    sn.addUser("Somano",20,170,"male",{"Foot ball","",""},4,{"John","Tadewos"} );
    sn.addUser("Somano",20,170,"male",{"Foot ball","",""},5,{"John","Benjamin","George","Akmos"} );
    sn.addUser("Somano",20,170,"male",{"Volley Ball","Joker","Table tennis","Soccer"},6,{"John","Tadewos"} );
    sn.deleteUser(3);
    std::cout<<sn.searchUserByName("James")<<"\n";
    std::cout<<sn.searchUserByName("Abraham")<<"\n";
    std::cout<<sn.searchUserByAge(20)<<"\n";
    std::cout<<sn.searchUserByAge(3)<<"\n";
    std::cout<<sn.searchUserByHobbies({"Volley Ball","Joker","Table tennis","Soccer"})<<"\n";
    std::cout<<sn.searchUserByHobbies({"Foot ball","Running","Singing"})<<"\n";
    return 0;

}
