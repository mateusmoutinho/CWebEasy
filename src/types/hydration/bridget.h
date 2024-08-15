
#include "../string_array.h"
#include "../request.h"

#ifndef PRIVATE_CWEB_HYDRATATION_BRIDGET_BRIDGET_TYPES
#define PRIVATE_CWEB_HYDRATATION_BRIDGET_BRIDGET_TYPES


typedef struct  CWebHyDrationBridge {
    char *name;
    void  *hydration;
    void  (*callback)(CWebHyDrationBridge *bridge);
    cJSON *args;
    cJSON *body;
    CwebStringArray *entries_callbacks;
    CwebStringArray *calls;

    void *extra_args;

}CWebHyDrationBridge;

#endif //PRIVATE_CWEB_HYDRATATION_BRIDGET_BRIDGET_TYPES
