#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};


class Game
{
public:

	// variables
	GameState State;
	GLboolean Keys[1024];
	GLuint Width, Height;

	// constructor/destructor
	Game(GLuint width, GLuint height);
	~Game();

	// init game state
	void Init();

	// game loop
	void ProcessInput(GLfloat dt);
	void Update(GLfloat dt);
	void Render();
};

#endif // !GAME_H
