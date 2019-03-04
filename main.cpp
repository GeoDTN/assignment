#include <iostream>

#include "socialnetwork.h"

using namespace std;

int main()
{
    SocialNetwork sn;
    sn.addUser("James",20,170,"male",{"","Tennis",""},1,{"John","Peter"} );
    sn.addUser("James",0,170,"male",{"","",""},2,{"Andrew","John"} );
    sn.addUser("Somano",20,170,"male",{"","",""},3,{"John","Tadewos"} );
    sn.addUser("Somano",20,170,"male",{"Foot ball","",""},4,{"John","Tadewos"} );
    sn.deleteUser(3);
    return 0;

}
