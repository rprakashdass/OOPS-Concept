#ifndef MAIL_H
#define MAIL_H

#include <string>
using namespace std;

static int mailUniqueId = 1111;

class Mail {
private:
    int mailId;
    int userId;
    string fromAddr;
    string toAddr;
    string subject;
    string body;
    bool sent;
public:
    Mail(const int userId, const string& fromAddr, const string& toAddr, const string &subject, const string &body)
    : userId(userId), fromAddr(fromAddr), toAddr(toAddr), subject(subject), body(body), sent(false) {
        mailId = userUniqueId;
    }
    void setSentStatus() {
        sent = true;
    }
};


#endif