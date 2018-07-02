#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>

class Texture2D
{
	// ID of texture object
	GLuint ID;

	// texture image dimensions
	GLuint Width, Height;

	GLuint Internal_Format;
	GLuint Image_Format;

	GLuint Wrap_S;
	GLuint Wrap_T;
	GLuint Filter_Min;
	GLuint Filter_Max;

	// constructor
	Texture2D();

	// generate texture from image data
	void Generate(GLuint width, GLuint height, unsigned char* data);

	// bind texture as the currrent active GL_TEXTURE_2D
	void Bind() const;

};

#endif