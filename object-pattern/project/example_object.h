#include <stdint.h>

struct example_object
{
    uint32_t example_variable;
    uint32_t example_flags;
};

void example_object_init(struct example_object *self);
void example_object_deinit(struct example_object *self);
