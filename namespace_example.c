#include <stdio.h>
#include <cstring>

namespace foo{
    struct samename{
        const char* value;
        int value2 = 1;
    };
}
namespace bar{
    struct samename{
        int value;
    };
}

int main(){
    foo::samename fromfoo;
    bar::samename frombar;
    fromfoo.value = "Hello";
    frombar.value = 1;
    printf("frombar %d\n",frombar.value);
    printf("fromfoo %s\n",fromfoo.value);
    printf("sum = %d\n",frombar.value + fromfoo.value2);
    return;
}