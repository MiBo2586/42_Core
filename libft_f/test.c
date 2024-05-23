#include <stddef.h>
#include <string.h>

size_t my_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = strnlen(dst, dstsize);
    size_t src_len = strlen(src);

    if (dst_len == dstsize) {
        return dstsize + src_len;
    }

    if (src_len < dstsize - dst_len) {
        memcpy(dst + dst_len, src, src_len + 1);
    } else {
        memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }

    return dst_len + src_len;
}