
#include "../uniq.declaration_requirements.h"


void privateCWebHyDrationBridge_add_response(CWebHyDrationBridge *self,const char *name,cJSON *data);

void CWebHyDrationBridge_set_session_storage_data(CWebHyDrationBridge *self,const char*key, const char *value,...);

void CWebHyDrationBridge_alert(CWebHyDrationBridge *self,const char *menssage,...);

void CWebHyDrationBridge_execute_script(CWebHyDrationBridge *self,const char *code,...);

void CWebHyDrationBridge_replace_element_by_id(CWebHyDrationBridge *self,const char *id, const char *code,...);

void CWebHyDrationBridge_destroy_by_id(CWebHyDrationBridge *self,const char * id);
