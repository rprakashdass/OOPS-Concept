#ifndef MAIL_APPLICATION_H
#define MAIL_APPLICATION_H

#include <string>
#include <unordered_map>

#include "./User.h"
#include "./Mail.h"

using namespace std;

class MailApplication {
    private:
        unordered_map<int, User*> users;
        unordered_map<int, Mail*> mails;
        int loggedInUserId;
    public:
        MailApplication() : loggedInUserId(-1) {}
        void login(const string &email, const string &password);
        void signup(const string& name, const string &email, const string &password);

        // utility
        bool isLoggedIn();
        bool alreadyExists(const string &email);
};

#endif