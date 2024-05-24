#include "profiling.h"
#include "prefix_ubenchs.h"

ubench_t ubenchs_prefix[] = {
     &ubench_prefix_0,
     &ubench_prefix_1,
     &ubench_prefix_2,
     &ubench_prefix_3,
     &ubench_prefix_4,
     &ubench_prefix_5,
     &ubench_prefix_6,
     &ubench_prefix_7,
     &ubench_prefix_8,
     &ubench_prefix_9,
     &ubench_prefix_10,
     &ubench_prefix_11,
     &ubench_prefix_12,
     &ubench_prefix_13,
     &ubench_prefix_14,
     &ubench_prefix_15,
     &ubench_prefix_16,
     &ubench_prefix_17,
     &ubench_prefix_18,
     &ubench_prefix_19,
     &ubench_prefix_20,
     &ubench_prefix_21,
     &ubench_prefix_22,
     &ubench_prefix_23,
     &ubench_prefix_24,
     &ubench_prefix_25,
     &ubench_prefix_26,
     &ubench_prefix_27,
     &ubench_prefix_28,
     &ubench_prefix_29,
     &ubench_prefix_30,
     &ubench_prefix_31,
     &ubench_prefix_32,
     &ubench_prefix_33,
     &ubench_prefix_34,
     &ubench_prefix_35,
     &ubench_prefix_36,
     &ubench_prefix_37,
     &ubench_prefix_38,
     &ubench_prefix_39,
     &ubench_prefix_40,
     &ubench_prefix_41,
     &ubench_prefix_42,
     &ubench_prefix_43,
     &ubench_prefix_44,
     &ubench_prefix_45,
     &ubench_prefix_46,
     &ubench_prefix_47,
     &ubench_prefix_48,
     &ubench_prefix_49,
     &ubench_prefix_50,
     &ubench_prefix_51,
     &ubench_prefix_52,
     &ubench_prefix_53,
     &ubench_prefix_54,
     &ubench_prefix_55,
     &ubench_prefix_56,
     &ubench_prefix_57,
     &ubench_prefix_58,
     &ubench_prefix_59,
     &ubench_prefix_60,
     &ubench_prefix_61,
     &ubench_prefix_62,
     &ubench_prefix_63,
     &ubench_prefix_64,
     &ubench_prefix_65,
     &ubench_prefix_66,
     &ubench_prefix_67,
     &ubench_prefix_68,
     &ubench_prefix_69,
     &ubench_prefix_70,
     &ubench_prefix_71,
     &ubench_prefix_72,
     &ubench_prefix_73,
     &ubench_prefix_74,
     &ubench_prefix_75,
     &ubench_prefix_76,
     &ubench_prefix_77,
     &ubench_prefix_78,
     &ubench_prefix_79,
     &ubench_prefix_80,
     &ubench_prefix_81,
     &ubench_prefix_82,
     &ubench_prefix_83,
};

char* ubench_prefix_instructions[] = {
     "vmov.w r6, s2                         ",
     "ldr.w r14, [r0, #7*32/4]        ",
     "ldr.w r8, [r0, #6*32/4]         ",
     "smull r11, r7, r14, r6                ",
     "smull r14, r8, r8, r6                 ",
     "ldr.w r4, [r0, #2*32/4]         ",
     "mul r1, r11, r2                       ",
     "ldr.w r9, [r0, #3*32/4]         ",
     "mul r5, r14, r2                       ",
     "vmov.w r12, s4                        ",
     "smlal r11, r7, r1, r3                 ",
     "ldr.w r11, [r0, #5*32/4]        ",
     "ldr.w r10, [r0, #1*32/4]        ",
     "smull r11, r1, r11, r6                ",
     "add r9, r7                            ",
     "smlal r14, r8, r5, r3                 ",
     "sub.w r5, r9, r7, lsl #1              ",
     "mul r14, r11, r2                      ",
     "add r4, r8                            ",
     "smull r5, r7, r5, r12                 ",
     "smlal r11, r1, r14, r3                ",
     "sub.w r8, r4, r8, lsl #1              ",
     "mul r14, r5, r2                       ",
     "ldr.w r11, [r0, #4*32/4]        ",
     "smull r11, r6, r11, r6                ",
     "add r10, r1                           ",
     "smlal r5, r7, r14, r3                 ",
     "sub.w r14, r10, r1, lsl #1            ",
     "smull r5, r12, r8, r12                ",
     "vmov.w r8, s7                         ",
     "add r14, r7                           ",
     "mul r1, r11, r2                       ",
     "sub.w r7, r14, r7, lsl #1             ",
     "smull r8, r14, r14, r8                ",
     "smlal r11, r6, r1, r3                 ",
     "mul r1, r8, r2                        ",
     "mul r11, r5, r2                       ",
     "smlal r8, r14, r1, r3                 ",
     "vmov.w r1, s3                         ",
     "smull r4, r8, r4, r1                  ",
     "smlal r5, r12, r11, r3                ",
     "ldr.w r5, [r0]                        ",
     "mul r11, r4, r2                       ",
     "add r5, r6                            ",
     "smull r1, r9, r9, r1                  ",
     "smlal r4, r8, r11, r3                 ",
     "sub.w r4, r5, r6, lsl #1              ",
     "vmov.w r6, s8                         ",
     "mul r11, r1, r2                       ",
     "add r5, r8                            ",
     "add r4, r12                           ",
     "sub.w r12, r4, r12, lsl #1            ",
     "smull r6, r7, r7, r6                  ",
     "add r4, r14                           ",
     "smlal r1, r9, r11, r3                 ",
     "mul r11, r6, r2                       ",
     "vmov.w r1, s5                         ",
     "add r10, r9                           ",
     "str.w r4, [r0, #4*32/4]         ",
     "sub.w r9, r10, r9, lsl #1             ",
     "smull r1, r10, r10, r1                ",
     "smlal r6, r7, r11, r3                 ",
     "vmov.w r6, s6                         ",
     "sub.w r11, r4, r14, lsl #1            ",
     "mul r14, r1, r2                       ",
     "add r12, r7                           ",
     "smull r6, r9, r9, r6                  ",
     "smlal r1, r10, r14, r3                ",
     "str.w r11, [r0, #5*32/4]        ",
     "mul r1, r6, r2                        ",
     "sub.w r14, r12, r7, lsl #1            ",
     "sub.w r7, r5, r8, lsl #1              ",
     "add r5, r10                           ",
     "smlal r6, r9, r1, r3                  ",
     "str.w r12, [r0, #6*32/4]        ",
     "str.w r14, [r0, #7*32/4]        ",
     "sub.w r6, r5, r10, lsl #1             ",
     "str.w r6, [r0, #1*32/4]         ",
     "add r7, r9                            ",
     "sub.w r8, r7, r9, lsl #1              ",
     "str.w r7, [r0, #2*32/4]         ",
     "str.w r8, [r0, #3*32/4]         ",
     "vmov r10, s9                          ",
     "str.w r5, [r0], #strincr              ",
};

const unsigned int num_ubenchs_prefix = 84;
