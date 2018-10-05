#include <dlfcn.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    void *handle = nullptr;
    const char *(*saystuff)();
    int option = 0;

    if (argc == 2)
    {
        option = atoi(argv[1]);
    }

    switch (option)
    {
    case 1:
        handle = dlopen("./libsaybar.so", RTLD_LAZY);
        saystuff = (const char *(*)()) dlsym(handle, "saybar");
        break;
    default:
        handle = dlopen("./libsayfoo.so", RTLD_LAZY);
        saystuff = (const char *(*)()) dlsym(handle, "sayfoo");
    }

    cout << saystuff() << endl;

    return 0;
}