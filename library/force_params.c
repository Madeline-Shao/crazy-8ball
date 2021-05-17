#include <stdlib.h>
#include <math.h>
#include "list.h"
#include "vector.h"
#include "body.h"
#include "scene.h"
#include "force_params.h"

typedef struct two_body_params{
    double constant;
    body_t *body_1;
    body_t *body_2;
} two_body_params_t;

two_body_params_t *two_body_params_init(double constant, body_t *body_1, body_t *body_2){
    two_body_params_t *params = malloc(sizeof(two_body_params_t));
    params->constant = constant;
    params->body_1 = body_1;
    params->body_2 = body_2;
    return params;
}

void two_body_params_free(two_body_params_t *params){
    free(params);
}
 
double two_body_params_get_constant(two_body_params_t *params){
    return params->constant;
}
 
body_t *two_body_params_get_body_1(two_body_params_t *params){
    return params->body_1;
}

body_t *two_body_params_get_body_2(two_body_params_t *params){
    return params->body_2;
}


typedef struct one_body_params{
    double constant;
    body_t *body;
} one_body_params_t;

one_body_params_t *one_body_params_init(double constant, body_t *body){
    one_body_params_t *params = malloc(sizeof(one_body_params_t));
    params->constant = constant;
    params->body = body;
    return params;
}

void one_body_params_free(one_body_params_t *params){
    free(params);
}
  
double one_body_params_get_constant(one_body_params_t *params){
    return params->constant;
}
 
body_t *one_body_params_get_body(one_body_params_t *params){
    return params->body;
}

