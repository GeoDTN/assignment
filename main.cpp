#include <iostream>

#include "socialnetwork.h"

using namespace std;

int main()
{
  // void SocialNetwork::addUser(std::string name,unsigned int age,unsigned int height, std::string gender,
   //                              std::vector<std::string> hobbies,unsigned int id, std::vector<std::string> friends )
    SocialNetwork sn;
    sn.addUser("James",20,170,"male",{"","",""},1,{"John","Peter"} );
    sn.addUser("James",20,170,"male",{"","",""},2,{"Andrew","John"} );
    sn.addUser("Somano",20,170,"male",{"","",""},3,{"John","Tadewos"} );
    sn.addUser("Somano",20,170,"male",{"","",""},4,{"John","Tadewos"} );
    sn.deleteUser(3);
    return 0;

}
