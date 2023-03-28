#include "example_object.h"

#include <string.h>

void example_object_init(struct example_object *self)
{
    //memset_s(self, sizeof(*self), 0, sizeof(*self));
    memset(self, 0, sizeof(*self));
}

void example_deinit(struct example_object *self)
{
    /* Clean up... */
}
