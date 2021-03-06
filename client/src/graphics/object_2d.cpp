#include "object_2d.h"
#include "graphics_2d.h"

#include "../texture_manager.h"
#include "../input_manager.h"
//#include <ft2build.h>
//#include FT_FREETYPE_H


void Line::Draw( Graphics2D& g2d ) 
{
     g2d.DrawLine(*this); 
};

void Rect::Draw( Graphics2D& g2d) 
{
     g2d.DrawRect(*this); 
};
void Circle::Draw( Graphics2D& g2d)
{
     g2d.DrawCircle(*this); 
};


Image::Image(String path,Vec2i pos,Vec2i size)
{
    this->path = path;
    this->T().pos.x  = pos.x;
    this->T().pos.y  = pos.y;
    this->T().size.x = size.x;
    this->T().size.y = size.y;
    TextureManager::GetInstance()->LoadTexture(path);    
}


void Image::Draw(Graphics2D& g2d) 
{
     g2d.DrawImage(*this); 
};


Text::Text(std::wstring text, GLfloat x, GLfloat y, GLfloat scale, glm::vec3 color)
{

}

Text::~Text()
{

}
	
void Text::Draw(Graphics2D& g2d)
{

}



