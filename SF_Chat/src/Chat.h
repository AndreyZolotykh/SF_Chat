#pragma once
#include <vector>
#include <exception>
#include<memory>
#include "Message.h"

using namespace std;

struct UserLoginEx : public exception
{
	const char* what() const noexcept override { return "Логин уже использован, введите другой вариант"; }
};

class Chat
{
public:
	void startChat();
	void showLoginMenu();
	void showUserMenu();
	bool work() const { return work_; }
	shared_ptr <User> getcurrentUser() const { return currentUser_; }

private:
	vector <User> userArr_;
	vector <Message> messageArr_;
	shared_ptr <User> currentUser_ = nullptr;
	bool work_ = false;

	void userLogin();
	void userRegistration();
	void showChat() const;
	void showAllUsers() const;
	void addMessage();

	vector <User>& getAlluser() { return userArr_; }
	vector <Message>& getAllmessage() { return messageArr_; }
	shared_ptr <User> getUserLog(const string& login) const;
	shared_ptr <User> getUserName(const string& name) const;

}; 
