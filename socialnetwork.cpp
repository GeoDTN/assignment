#include "socialnetwork.h"
#include <iostream>


void SocialNetwork::addUser(std::string name,unsigned int age,unsigned int height, std::string gender, std::vector<std::string> hobbies,unsigned int id, std::vector<std::string> friends )
{
    if(u.getId()==id)
        {
            printf("User exists");
            return;
        }
    else if (id==0)
          {
          std::cout<<"Zero as ID is not allowed\n";//Because the compiler generated ctr defaults id to 0
          }
   u.setName(name);
   u.setId(id);
   u.setAge(age);
   u.setHeight(height);
   u.setGender(gender);
   u.setHobbies(hobbies);
   u.setFriends(friends);
   us.push_back(u);

}

void SocialNetwork:: deleteUser(unsigned int id)
{
     std::map<unsigned int,std::string>::iterator it;

    it = u.getUser().find(id);
      if (it != u.getUser().end())
       u.getUser().erase (it);
      return;
}

bool SocialNetwork:: searchUserByName(std::string name )
{
     bool exists=false;
     auto it = u.getUser().begin();
     while(it!=u.getUser().end())
       {
          if(it->second==name)
            {
             exists=true;
             break;
            }
          ++it;
        }
       return exists;
}

bool SocialNetwork:: searchUserByAge(unsigned int age)
{
    auto it=us.begin();
    bool exists=false;

    while(it!=us.end())
    {
        if(it->getAge()==age)
        {
            exists=true;
            break;
        }

        ++it;
    }
    return exists;


}
bool SocialNetwork:: searchUserByHobbies(std::vector<std::string>hobbies)
{

    auto it=us.begin();
    bool exists=false;

    while(it!=us.end())
    {
        if(it->getHobbies()==hobbies)
        {
            exists=true;
        }
        break;
        ++it;
    }
    return exists;
}
  std::vector<std::string> SocialNetwork:: getFriendsOfUser(unsigned int id)
{

      auto it=us.begin();


      while(it!=us.end())
      {
          if(it->getId()==id){
              return  it->getHobbies();
          }

          ++it;
      }
      printf("The user does not exist");
      return std::vector<std::string>{};

}
