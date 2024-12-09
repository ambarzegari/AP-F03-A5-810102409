#include "ًRightSheeps.hpp"

RightBozi::RightBozi(int row)
{
    right_bozi_config = SHEEP_CONFIGS[0];
    right_bozi_texture.loadFromFile(IMAGE_FOLDER + "black_goat.png");
    right_bozi_sprite.setTexture(right_bozi_texture);
    right_bozi_position = InitialPosition(row);
    right_bozi_sprite.setPosition(right_bozi_position);
}
void RightBozi::setPosition(Vector2f pos)
{
    right_bozi_position = pos;
    right_bozi_sprite.setPosition(pos);
}
void RightBozi::move()
{
    right_bozi_position.x -= SPEED;
    right_bozi_sprite.setPosition(right_bozi_position);
}
void RightBozi::render(RenderWindow &window)
{
    window.draw(right_bozi_sprite);
}

Vector2f InitialPosition(int i)
{
    if (i == 1)
    {
        return Vector2f(850, 102);
    }
    else if (i == 2)
    {
        return Vector2f(850, 252);
    }
    else if (i == 3)
    {
        return Vector2f(850, 399);
    }
    else if (i == 4)
    {
        return Vector2f(850, 546);
    }
    return Vector2f(-1000, -1000);
}