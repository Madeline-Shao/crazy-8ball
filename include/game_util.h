#include "vector.h"
#include "color.h"
#include "sdl_wrapper.h"
#include "list.h"
#include "body.h"

extern const vector_t LOW_LEFT_CORNER;
extern const vector_t HIGH_RIGHT_CORNER;
extern const double CIRCLE_POINTS;
extern const double BALL_RADIUS;
extern const double CUE_STICK_HEIGHT;
extern const double CUE_STICK_WIDTH;
extern const double BALL_MASS;
extern const double NUM_BALLS;
extern const double CUE_STICK_WIDTH;
extern const rgb_color_t WHITE_COLOR;
extern const SDL_Color WHITE_COLOR_SDL;
extern const SDL_Color BLACK_COLOR;
extern const double TABLE_WIDTH;;
extern const double TABLE_HEIGHT;
extern const double WALL_THICKNESS;
extern const double WALL_TABLE_WIDTH_DIFF;
extern const double TABLE_WALL_THICKNESS;
extern const double WALL_GAP;
extern const double HOLE_RADIUS;
extern const double HOLE_CONSTANT;
extern const double CORRECTION_CONSTANT;
extern const double BREEZY_CONSTANT;
extern const double BALL_ELASTICITY;
extern const double MU;
extern const double G;
extern const double DRAG_DIST;
extern const double SLIDER_WIDTH;
extern const double SLIDER_HEIGHT;
extern const double SLIDER_X;
extern const double BUTTON_WIDTH;
extern const double BUTTON_HEIGHT;
extern const double BUTTON_Y;
extern const double DEFAULT_IMPULSE;
extern const double CUE_STICK_DEFAULT_Y;
extern const vector_t VELOCITY_THRESHOLD;
extern const double TINY_CONSTANT;
extern const double PULL_FACTOR_ADJUSTMENT_CONSTANT;
extern const double SIZE_POWERDOWN_ADJUSTMENT_SCALE_FACTOR;
extern const double POWER_TEXT_Y;
extern const double START_MENU_BUTTON_SIDE_LENGTH;
extern const double RECTANGULAR_BUTTON_WIDTH;
extern const double RECTANGULAR_BUTTON_HEIGHT;
extern const double TITLE_TEXT_Y;
extern const double PLAY_BUTTON_X;
extern const double INFO_BUTTON_X;
extern const double QUIT_BUTTON_Y;
extern const vector_t QUIT_BUTTON_CENTROID;
extern const vector_t HELP_BUTTON_CENTROID;
extern const double QUIT_BUTTON_SIDE_LENGTH;
extern const vector_t START_PLAY_BUTTON_CENTROID;
extern const vector_t START_INSTRUCTIONS_BUTTON_CENTROID;
extern const vector_t START_QUIT_BUTTON_CENTROID;
extern const double BACKLOG_FORCE_CONSTANT_TO_SATISFY_PATRICKS_DESIRES;

list_t *rect_init(double width, double height);

list_t *circle_init(double radius);

body_t *get_object(scene_t *scene, char *name);

body_t *create_ball(scene_t *scene, char *info, SDL_Surface *img);