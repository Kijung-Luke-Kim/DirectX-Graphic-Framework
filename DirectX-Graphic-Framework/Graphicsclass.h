// Filename : graphicsclass.h
#pragma once

// INCLUDES
#include "d3dclass.h"
#include "CameraClass.h"
#include "ModelClass.h"
#include "ColorShaderClass.h"

// GLOBALS
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class GraphicsClass
{
public:
	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:
	D3DClass* m_Direct3D;
	CameraClass* m_Camera;
	ModelClass* m_Model;
	ColorShaderClass* m_ColorShader;

public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();
};