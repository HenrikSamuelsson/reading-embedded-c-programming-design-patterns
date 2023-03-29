#include "example_object.h"

struct application
{
    struct example_object obj;
};


void application_init(struct application *self){
    example_object_init(&self->obj);
}

int main(void)
{
    struct application app;
    application_init(&app);
    
    return 0;
}
