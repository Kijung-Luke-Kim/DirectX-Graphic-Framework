// Filename : modelclass.h
#pragma once

// INCLUDES
#include <d3d11.h>
#include <directxmath.h>
using namespace DirectX;

class ModelClass
{
private:
	struct  VertexType
	{
		XMFLOAT3 position;
		XMFLOAT4 color;
	};
public:
	bool Initialize(ID3D11Device*);
	void Shutdown();
	void Render(ID3D11DeviceContext*);

	int GetIndexCount();

private:
	bool InitializeBuffers(ID3D11Device*);
	void ShutdownBuffers();
	void RenderBuffers(ID3D11DeviceContext*);

private:
	ID3D11Buffer* m_vertexBuffer;
	ID3D11Buffer* m_indexBuffer;
	int m_vertexCount, m_indexCount;

public:
	ModelClass();
	ModelClass(const ModelClass&);
	~ModelClass();
};