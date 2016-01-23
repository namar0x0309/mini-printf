#include <string.h>
#include <stdarg.h>
#include "mini-printf.h"

int main( int argc, char ** argv )
{
    char buffer[ 512 ];
    mini_snprintf( buffer, 128, "\n%s", "test" );
    printf( "\n%s", buffer );
}
