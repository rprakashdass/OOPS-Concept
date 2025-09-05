#include "./include/MailApplication.h"

bool MailApplication::isLoggedIn() {
    if (loggedInUserId != -1) {
        cout << "User with id " << loggedInUserId << " is aldready logged in\n";
        return true;
    }
    return false;
}

bool MailApplication::alreadyExists(const string &email) {
    for(auto &[key, value]: users) {
        if(value->getEmail() == email) {
            loggedInUserId = key;
            cout << "User logged in successfully!\n";
            return true;
        }
    }
    throw "User does not exists!\n";
    return false;
}

void MailApplication::login(const string& email, const string& password) {
    if(!loggedInUserId) return;
    if(email.empty() || password.empty()) {
        throw "Please enter correct credentials";
    }
    for(auto &[key, value]: users) {
        if(value->getEmail() == email) {
            loggedInUserId = key;
            cout << "User logged in successfully!\n";
        }
        throw "User does not exists!\n";
    }
    return;
}

void MailApplication::signup(const string& name, const string &email, const string &password) {
    if(!loggedInUserId) return;
    if(alreadyExists(email)) return;

    User *user = new User(name, email, password);
    users[user->userId] = user;
    cout << "User successfully registered and logged in!\n";
}