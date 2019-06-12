// clang-format off
#define bswap_16(x) (((x&0xff00)>>8) \
                  | ((x&0x00ff)))

#define bswap_32(x) (((x&0xff000000)>>24) \
                  | ((x&0x00ff0000)>>16) \
                  | ((x&0x0000ff00)>>8) \
                  | ((x&0x000000ff)))

#define bswap_64(x) (((x&0xff00000000000000)>>56) \
                  | ((x&0x00ff000000000000)>>48) \
                  | ((x&0x0000ff0000000000)>>40) \
                  | ((x&0x000000ff00000000)>>32) \
                  | ((x&0x00000000ff000000)>>24) \
                  | ((x&0x0000000000ff0000)>>16) \
                  | ((x&0x000000000000ff00)>>8) \
                  | ((x&0x00000000000000ff)))
// clang-format on