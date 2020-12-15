#ifndef JIANGSHI_H_
#define JIANGSHI_H_

#include "RenderableObject.h"
#include "IUpdater.h"

class Jiangshi : public RenderableObject, public IUpdater
{
private:

public:
	Jiangshi(const char* filepath, float x, float y, float z);
	~Jiangshi();

	virtual void Clean() final;
	virtual void RenDeltaTime() override;
	virtual void Update() override;

};

#endif // !JIANGSHI_H_
