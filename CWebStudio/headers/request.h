

struct CwebHttpRequest{
    char *raw_entrys;
    char *url;
    char *route;
    char *method;
    struct CwebDict *params;
    struct CwebDict *headers;
    int content_length;
    unsigned char *content;

    void (*set_url)(struct CwebHttpRequest *self,const char *url);
    void (*set_route)(struct CwebHttpRequest *self,const char *route);
    void (*set_method)(struct CwebHttpRequest *self,const char *method);
    void (*set_content_string)(struct CwebHttpRequest *self,const char *content);

    void (*interpret_query_params)(struct CwebHttpRequest *self,const char *query_params);
    void (*interpret_first_line)(struct CwebHttpRequest *self, char *first_line);
    void (*interpret_headders)(struct CwebHttpRequest *self, struct DtwStringArray *line_headers);
    void (*free)(struct CwebHttpRequest *request);
    void (*represent)(struct CwebHttpRequest *request);
};
//algorithm functions

void private_cweb_set_url(struct CwebHttpRequest *self,const char *url);
void private_cweb_set_route(struct CwebHttpRequest *self,const char *route);
void private_cweb_set_method(struct CwebHttpRequest *self,const char *method);
void private_cweb_set_content_string(struct CwebHttpRequest *self,const char *content);

struct CwebHttpRequest *private_cweb_request_constructor();


struct CwebHttpRequest *private_cweb_create_http_request(char *raw_entrys);

void private_cweb_interpret_query_params(struct CwebHttpRequest *self,const char *query_params);

void private_cweb_interpret_first_line(struct CwebHttpRequest *self, char *first_line);


void private_cweb_interpret_headders(
    struct CwebHttpRequest *self,
    struct DtwStringArray *line_headers
);

void private_cweb_free_http_request(struct CwebHttpRequest *self);
void private_cweb_represent_http_request(struct CwebHttpRequest *self);

