#include "so_long.h"

void    moves(int key, t_map *map)
{
    if(key == W || key == UP)
        up(map);
    else if(key == S || key == DOWN)
        down(map);
    else if(key == A || key == LEFT)
        left(map);
    else if(key == D || key == RIGHT)
        right(map);
    //falta escape
}

void    up(t_map *map)
{
    if(map->matrix[map->p.y - 1][map->p.x] == '0')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y - 1][map->p.x] = 'P';
            map->p.y = map->p.y - 1;
            map->p.moves++;
        }
    else if(map->matrix[map->p.y - 1][map->p.x] == 'C')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y - 1][map->p.x] = 'P';
            map->p.y = map->p.y - 1;
            map->p.moves++;
            map->collect--;
        }
    else if(map->matrix[map->p.y - 1][map->p.x] == 'E' &&
    map->collect == 0)
    {
        map->matrix[map->p.y][map->p.x] == '0';
        map->matrix[map->p.y - 1][map->p.x] = 'P';
        map->p.y = map->p.y - 1;
        map->p.moves++;
        win();
    }
}
void    down(t_map *map)
{
    if(map->matrix[map->p.y + 1][map->p.x] == '0')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y + 1][map->p.x] = 'P';
            map->p.y = map->p.y + 1;
            map->p.moves++;
        }
    else if(map->matrix[map->p.y + 1][map->p.x] == 'C')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y + 1][map->p.x] = 'P';
            map->p.y = map->p.y + 1;
            map->p.moves++;
            map->collect--;
        }
    else if(map->matrix[map->p.y + 1][map->p.x] == 'E' &&
    map->collect == 0)
    {
        map->matrix[map->p.y][map->p.x] == '0';
        map->matrix[map->p.y + 1][map->p.x] = 'P';
        map->p.y = map->p.y + 1;
        map->p.moves++;
        win();
    }
}

void    right(t_map *map)
{
    if(map->matrix[map->p.y][map->p.x + 1] == '0')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y][map->p.x + 1] = 'P';
            map->p.y = map->p.x + 1;
            map->p.moves++;
        }
    else if(map->matrix[map->p.y][map->p.x + 1] == 'C')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y][map->p.x + 1] = 'P';
            map->p.y = map->p.x + 1;
            map->p.moves++;
            map->collect--;
        }
    else if(map->matrix[map->p.y][map->p.x + 1] == 'E' &&
    map->collect == 0)
    {
        map->matrix[map->p.y][map->p.x] == '0';
        map->matrix[map->p.y][map->p.x + 1] = 'P';
        map->p.y = map->p.x + 1;
        map->p.moves++;
        win();
    }
}

void    left(t_map *map)
{
    if(map->matrix[map->p.y][map->p.x - 1] == '0')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y][map->p.x - 1] = 'P';
            map->p.y = map->p.x - 1;
            map->p.moves++;
        }
    else if(map->matrix[map->p.y][map->p.x - 1] == 'C')
        {
            map->matrix[map->p.y][map->p.x] == '0';
            map->matrix[map->p.y][map->p.x - 1] = 'P';
            map->p.y = map->p.x - 1;
            map->p.moves++;
            map->collect--;
        }
    else if(map->matrix[map->p.y][map->p.x - 1] == 'E' &&
    map->collect == 0)
    {
        map->matrix[map->p.y][map->p.x] == '0';
        map->matrix[map->p.y][map->p.x - 1] = 'P';
        map->p.y = map->p.x - 1;
        map->p.moves++;
        win();
    }
}