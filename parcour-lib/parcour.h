#pragma once
#include <stdbool.h>

#define BASE_SPEED 40

// Wall following
enum dir { DIR_Left, DIR_Right };
enum follow_result { HIT_WALL, NO_WALL };
bool has_hit_wall();
enum follow_result follow_wall(enum dir dir);

// Line following
bool is_on_line();
void search_line();
bool follow_line();
bool check_line_end();

// Bar counting
int count_bar();
