#include "Human.h"
#include "FileManager.h"

Human::Human(const char* filepath, float x, float y, float z)
	: RenderableObject(filepath, x, y, z)
{
	//bool load = FileManager::Instance()->LoadOBJ(filepath, vertex, uv, normal);

	//FileManager::Instance()->indexVBO(vertex, uv, normal,
	//	indices, indexed_vertices, indexed_uvs,
	//	indexed_normals);
}
Human::~Human()
{

}

void Human::Clean()
{

}

void Human::Update()
{

}

void Human::RenDeltaTime()
{

}
