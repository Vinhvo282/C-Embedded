#include <stdio.h>
#include <stdint.h>

uint8_t compress_bits(uint16_t val) {
    uint8_t ans = 0;
    for (uint8_t i = 0, j = 0; i < 16; i += 2, ++j) {
        ans |= (uint8_t)(((val >> i) & 1u) << j);
    }
    return ans;
}

int main() {
    uint16_t val;
    scanf("%hu", &val);

    uint8_t result = compress_bits(val);
    printf("%u", result);
    return 0;
}