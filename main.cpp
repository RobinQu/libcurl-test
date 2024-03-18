#include <iostream>
#include <curl/curl.h>


int main() {
    CURLcode ret;
    CURL *hnd;
    hnd = curl_easy_init();
    curl_easy_setopt(hnd, CURLOPT_URL, "localhost:3928/healthz");
    curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
    curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/7.45.0");
    curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
    curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);
    ret = curl_easy_perform(hnd);
    curl_easy_cleanup(hnd);
    hnd = NULL;

    return (int)ret;
}
