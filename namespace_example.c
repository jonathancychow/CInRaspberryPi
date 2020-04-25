#include <stdio.h>
#include <cstring>

namespace foo{
    struct samename{
        const char* value;
    };
}
namespace bar{
    struct samename{
        int value;
    };
}

int main(){
    foo:samename fromfoo;
    bar:samename frombar;
    fromfoo.value = 'Hello World';
    frombar.value = 1;
    printf("frombar %d\n",frombar.value)
    return;
}