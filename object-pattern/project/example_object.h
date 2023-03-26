#include <stdint.h>

struct example_object
{
    uint32_t variable;
    uint32_t flags;
};

void example_object_init(struct my_object *self);
void example_object_deinit(struct my_object *self);
