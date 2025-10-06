#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "task2_vuln.h"

extern char* task2(const char* input);

int LLVMFuzzerTestOneInput(const uint8_t *Data, const size_t Size) {
    // Ensure Data is null-terminated
    char *input = malloc(Size + 1);
    if (!input) return 0;
    memcpy(input, Data, Size);
    input[Size] = '\0';

    char *out = task2(input);
    free(out);
    free(input);
    return 0;
}
