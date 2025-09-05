#include "./include/User.h"

User::User(const std::string &name, const std::string &email, const std::string &password)
    : name(name), email(email), password(password) {
        userId = userUniqueId++;
    }

std::string User::getEmail() const {
    return this->email;
}

std::string User::getName() const {
    return this->email;
}

std::string User::getPassword() const {
    return this->email;
}