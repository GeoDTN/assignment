#include "user.h"

std::string User:: getName()
{
    return this->name;
}
void User:: setName(std::string name)
{
  this->name=name;
}
unsigned int User:: getId()
{
    return  this->id;
}
void User:: setId(unsigned int id )
{
     this->id=id;
}
unsigned int User:: getAge()
{
    return this->age;
}
void User::setAge(unsigned int age)
{
     this->age=age;
}
unsigned int User:: getHeight()
{
    return this->height;
}
void User:: setHeight(unsigned int height)
{
     this->height=height;
}
std::vector<std::string> User:: getHobbies()
{
    return  this->hobbies;
}
void User:: setHobbies(std::vector<std::string> hobbies)
{
    this->hobbies=hobbies;
}
std::map<unsigned int,std::string> User:: getUser()
{
    return  this->user;
}
bool User:: setUser()
{

    if(!this->user.insert(std::pair<unsigned int,std::string>(getId(),getName())).second)
        return false;
    else
    return true;
}
std::tuple<std::string,unsigned int, std::vector<unsigned int>> User:: getEntry()
{
    return  this->entry;
}
void User:: setEntry(std::tuple<std::string,unsigned int, std::vector<unsigned int>> entry)
{
    this->entry=entry;
}

std::string User:: getGender()
{
    return  this->gender;
}
void User:: setGender(std::string  gender)
{
    this->gender=gender;
}
std::vector<std::string> User:: getFriends()
{
    return  this->friends;
}
void User::setFriends(std::vector<std::string> friends)
{
    this->friends=friends;
}
