#include "Chat.h"

int main()
{
	Chat chat;
	chat.startChat();

	while (chat.work())
	{
		chat.showLoginMenu();
		while (chat.getcurrentUser())
		{
			chat.showUserMenu();
		}
	}
	return 0;
}