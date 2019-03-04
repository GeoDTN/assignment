#ifndef SOCIALNETWORK_H
#define SOCIALNETWORK_H
#include<string>
#include <vector>

#include<user.h>

class SocialNetwork
{
public:
    void addUser(std::string,unsigned int,unsigned int,std::string, std::vector<std::string>,unsigned int, std::vector<std::string> );
    void deleteUser(unsigned int );
    bool searchUserByName(std::string );
    bool searchUserByAge(unsigned int );
    bool searchUserByHobbies(std::vector<std::string>);
std::vector<std::string> getFriendsOfUser(unsigned int);


private:
    User u;
    std::vector<User> us;
};

#endif // SOCIALNETWORK_H
