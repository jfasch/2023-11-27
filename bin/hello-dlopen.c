#include <dlfcn.h>
#include <stdio.h>


int main()
{
    void *module, *hello_sym;
    void (*hello)(void);

    module = dlopen("libhello.so", RTLD_NOW);
    if (module == NULL) {
        perror("nix dlopen libhello");
        return 1;
    }

    hello = dlsym(module, "hello");
    if (hello == NULL) {
        perror("nix hello()");
        return 1;
    }
    
    hello();

    dlclose(module);

    return 0;
}
