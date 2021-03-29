#pragma once
// PRE - PROCESSING DIRECTIVES
#define WIN32_LEAN_AND_MEAN
#include "windows.h"
// MY CLASS INCLUDES
#include "Inputclass.h"
#include "graphicsclass.h"

class SystemClass
{
public:
	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hInstance;
	HWND m_hwnd;

	InputClass* m_Input;
	GraphicsClass* m_Graphics;

public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();
};

// FUNCTION PROTOTYPES
static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// GLOBALS
static SystemClass* ApplicationHandle = 0;
