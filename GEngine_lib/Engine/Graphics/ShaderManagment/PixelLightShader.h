#pragma once
#include "Shader.h"

namespace ge {
	//! ����� ������ ����������� ���������. 
	//! ��������� ����� ������������ LightManager
	class PixelLightShader : public Shader
	{
	public:
		PixelLightShader();
		~PixelLightShader();

	private:
		static sf::Shader my_shader;
		friend class ShaderManager;
	};
}
