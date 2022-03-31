#include <png.h>

int
main ()
{
  png_structp p =
      png_create_read_struct (PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
  if (p == NULL)
    return 1;
  png_destroy_read_struct (&p, NULL, NULL);
  return 0;
}
