#ifndef USER_H
#define USER_H

#include<string>
#include<vector>
#include<tuple>
#include<map>

class User {
    std::string name;
    unsigned int id;
    unsigned int age;
    unsigned int height;
    std::string gender;
    std::vector<std::string>friends;
    std::vector<std::string>hobbies;
    std::map<unsigned int,std::string> user;
    std::tuple<std::string,unsigned int, std::vector<unsigned int>> entry;

public:
    std::string getName();
    void setName(std::string);
    unsigned int getId();
    void setId(unsigned int );
    std::string getGender();
    void setGender(std::string);
    unsigned int getAge();
    void setAge(unsigned int);
    unsigned int getHeight();
    void setHeight(unsigned int);
   std::vector<std::string> getHobbies();
    void setHobbies(std::vector<std::string>);
   std::map<unsigned int,std::string> getUser();
    bool setUser();
   std::tuple<std::string,unsigned int, std::vector<unsigned int>> getEntry();
   void setEntry(std::tuple<std::string,unsigned int, std::vector<unsigned int>>);
   std::vector<std::string> getFriends();
   void setFriends(std::vector<std::string>);
};
#endif // USER_H
