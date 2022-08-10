#pragma once
#include "User.h"

class Message
{
public:
	Message(const string& messageFrom, const string& messageTo, const string &text) : messageFrom_(messageFrom), messageTo_(messageTo), text_(text) {}

	const string& getFrom() const { return messageFrom_; }
	const string& getTo() const { return messageTo_; }
	const string& getText() const { return text_; }

private:
	string messageFrom_;
	string messageTo_;
	string text_;

}; 
