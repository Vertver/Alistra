#pragma once
#include "Base.h"

HWND GetMainWindowHandle();

HWND CreateMainWindow();
void DestroyMainWindow();

void MainWindowLoop();