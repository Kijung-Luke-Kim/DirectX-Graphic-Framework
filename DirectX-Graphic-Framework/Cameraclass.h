// Filename : cameraclass.h
#pragma once

// INCLUDES
#include <directxmath.h>
using namespace DirectX;

class CameraClass
{
public:
	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	XMFLOAT3 GetPosition();
	XMFLOAT3 GetRotation();

	void Render();
	void GetViewMatrix(XMMATRIX&);

private:
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	XMMATRIX m_viewMatrix;

public:
	CameraClass();
	CameraClass(const CameraClass&);
	~CameraClass();
};