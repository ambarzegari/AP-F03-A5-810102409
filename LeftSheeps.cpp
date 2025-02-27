#include "LeftSheeps.hpp"

LeftBozi::LeftBozi(int _row)
{
    left_bozi_config = SHEEP_CONFIGS[0];
    left_bozi_texture.loadFromFile(IMAGE_FOLDER + "white_goat.png");
    left_bozi_sprite.setTexture(left_bozi_texture);
    left_bozi_position = InitialPositionl(_row);
    left_bozi_sprite.setPosition(left_bozi_position);
    row = _row;
}
void LeftBozi::setPosition(Vector2f pos)
{
    left_bozi_position = pos;
    left_bozi_sprite.setPosition(pos);
}
void LeftBozi::move()
{
    left_bozi_position.x += SPEED;
    left_bozi_sprite.setPosition(left_bozi_position);
}
void LeftBozi::render(RenderWindow &window)
{
    window.draw(left_bozi_sprite);
}
Vector2f LeftBozi::getPosition()
{
    return left_bozi_sprite.getPosition();
}

LeftShangool::LeftShangool(int _row)
{
    left_shangool_config = SHEEP_CONFIGS[1];
    left_shangool_texture.loadFromFile(IMAGE_FOLDER + "white_pig.png");
    left_shangool_sprite.setTexture(left_shangool_texture);
    left_shangool_position = InitialPositionl(_row);
    left_shangool_sprite.setPosition(left_shangool_position);
    left_shangool_sprite.setScale(1.2, 1.2);
    row = _row;
}
void LeftShangool::setPosition(Vector2f pos)
{
    left_shangool_position = pos;
    left_shangool_sprite.setPosition(pos);
}
void LeftShangool::move()
{
    left_shangool_position.x += SPEED;
    left_shangool_sprite.setPosition(left_shangool_position);
}
void LeftShangool::render(RenderWindow &window)
{
    window.draw(left_shangool_sprite);
}
Vector2f LeftShangool::getPosition()
{
    return left_shangool_sprite.getPosition();
}

LeftMangool::LeftMangool(int _row)
{
    left_mangool_config = SHEEP_CONFIGS[2];
    left_mangool_texture.loadFromFile(IMAGE_FOLDER + "white_sheep.png");
    left_mangool_sprite.setTexture(left_mangool_texture);
    left_mangool_position = InitialPositionl(_row);
    left_mangool_sprite.setPosition(left_mangool_position);
    left_mangool_sprite.setScale(1, 1);
    row = _row;
}
void LeftMangool::setPosition(Vector2f pos)
{
    left_mangool_position = pos;
    left_mangool_sprite.setPosition(pos);
}
void LeftMangool::move()
{
    left_mangool_position.x += SPEED;
    left_mangool_sprite.setPosition(left_mangool_position);
}
void LeftMangool::render(RenderWindow &window)
{
    window.draw(left_mangool_sprite);
}
Vector2f LeftMangool::getPosition()
{
    return left_mangool_sprite.getPosition();
}

Vector2f InitialPositionl(int i)
{
    if (i == 1)
    {
        return Vector2f(160, 102);
    }
    else if (i == 2)
    {
        return Vector2f(160, 252);
    }
    else if (i == 3)
    {
        return Vector2f(160, 399);
    }
    else if (i == 4)
    {
        return Vector2f(160, 546);
    }
    return Vector2f(-1000, -1000);
}