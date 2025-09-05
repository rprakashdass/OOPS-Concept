#ifndef User_H
#define User_H

#include <iostream>
#include <string>

static int userUniqueId = 111;

class User {
    private:
    std::string name;
    std::string email;
    std::string password;
    public:
        int userId;
        User(const std::string& name, const std::string &email, const std::string &password);
        std::string getName() const;
        std::string getEmail() const;
        std::string getPassword() const;
};

#endif