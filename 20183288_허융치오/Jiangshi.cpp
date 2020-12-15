#include "Jiangshi.h"
#include "FileManager.h"

Jiangshi::Jiangshi(const char* filepath, float x, float y, float z)
	: RenderableObject(filepath, x, y, z)
{
	//bool load = FileManager::Instance()->LoadOBJ(filepath, vertex, uv, normal);

	//FileManager::Instance()->indexVBO(vertex, uv, normal,
	//	indices, indexed_vertices, indexed_uvs,
	//	indexed_normals);
}
Jiangshi::~Jiangshi()
{

}

void Jiangshi::Clean()
{

}

void Jiangshi::Update()
{

}

void Jiangshi::RenDeltaTime()
{

}