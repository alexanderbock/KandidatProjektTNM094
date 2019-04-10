#include "./Scene.hpp"

// Constructor
Scene::Scene(){
	std::cout << "scene gjord" << std::endl;
    //background = new Quad("background", 2.5f, 1.5f);

	test_bg = new ModelLoader("sphere", "background");
}

float Dome_Radius = 8;

// Draws the scene in dome or normal desktop mode
void Scene::render() const {
	//background->display();
	glPushMatrix();
	glScalef(Dome_Radius, Dome_Radius, Dome_Radius);
	test_bg->draw();
	glPopMatrix();
    //background->draw(0.0f, 0.0f, -0.4f);

	//glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(glm::vec3), &vertices[0], GL_STATIC_DRAW);


}
