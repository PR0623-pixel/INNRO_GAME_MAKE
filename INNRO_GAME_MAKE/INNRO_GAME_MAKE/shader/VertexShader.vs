#version 330 core

uniform mat4 u_view;
uniform mat4 u_projection;

void main()
{
	gl_Posirion = u_projection * u_View * vec4(apos, 1.0);
}