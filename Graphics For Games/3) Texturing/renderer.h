# pragma once

#include "../../nclgl/OGLRenderer.h"

class renderer : public OGLRenderer {
public:
	renderer(Window & parent);
	virtual ~renderer(void);

	virtual void RenderScene();

	void UpdateTextureMatrix(float rotation);
	void ToggleRepeating();
	void ToggleFiltering();

protected:
	Mesh * triangle;

	bool filtering;
	bool repeating;
};
